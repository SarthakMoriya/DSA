#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3,4};
    int arr2[] = {3, 4};
    int arr3[10] = {};
    int INT_MAX=19878;

    for (int i = 0; i <4;i=i+1)
    {
        int element = arr1[i];
        for (int j = 0; j < 2; j++)
        {
            // if (element < arr2[j])
            // {
            //     cout<<"Break Executed!"<<endl;
            //     // cout<<i<<" ";
                
            //     break;
            // }
            if(element==arr2[j])
            {
                arr2[j]=INT_MAX;
                
                arr3[i]=element;
                // cout<<" "<<j<<" "<<endl;
                break;
            }
        }
        
    }
    for (int i = 0; i <5;i++)
    {
        if(arr3[i]!=0)
        cout<<arr3[i]<<" ";
    }

    return 0;
}