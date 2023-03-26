#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {1, 7, 3, 6, 5, 6};
    int arr[]={1,2,3,3};
    // int arr[] = {1, 1,1,3 };
    int sum1 = 0, sum2 = 0, i, j, mid;
    i = 0;
    int size = (sizeof(arr) / sizeof(int)) - 1;
    // j=size;
    mid = 0; // 2

    while (mid <= size) // 2<=5 true
    {
        for (i = 0; i < mid; i++)
        {
            sum1 += arr[i];
        }
        for (j = size; j > mid; j--)
        {
            sum2 += arr[j];
        }
        cout << "MID:::" << mid << endl;
        cout << sum1 << " " << sum2 << endl;
        if (sum1 == sum2)
        {
            cout << "THE PIVOT ELEMENT IS::" << arr[mid] << " INDEX::" << mid << endl;
            exit(1);
        }

        else if (sum2 > sum1)
        {
            sum1 = sum2 = 0;
            mid++;
        }
        else if (sum1 > sum2)
        {
            sum1 = sum2 = 0;
            mid++;
        }
        else 
        {
            cout<<-1;
            
        }
    }
    // if(sum1!=sum2)
    // {
    //     cout<< -1;
    // }
    // cout<<"hello";
    // cout<<sum1;
    // cout<<sum2;
    return 0;
}