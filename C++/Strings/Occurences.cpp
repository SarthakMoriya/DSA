#include <iostream>
using namespace std;

int main()
{
    char s[] = "aaabbbcccdddeeefffggghhhh";
    int size = sizeof(s) / sizeof(s[0]);
    cout<<"Size::"<<size<<endl;
    int arr[26] = {0};

    for (int i = 0; i < size; i++)
    {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            int num = ch - 'A';
            arr[num]++;
        }

        if (ch >= 'a' && ch <= 'z')
        {
            int num = ch - 'a';
            arr[num]++;
        }
    }
    int maxi=arr[0];
    for(int i=0;i<=25;i++)
    {
        cout<<arr[i]<<" ";
        if(arr[i]>maxi)
         maxi=i;
    }
    char che=maxi+'a';
    cout<<che;


    return 0;
}