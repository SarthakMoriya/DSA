#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6};
    // int arr[]={10 ,9 ,8, 7, 6};
    //answer:::10 4 5 2 6 3 1 6 3 
    // int m = 3;
    // int i = m+1;
    // int size = sizeof(arr) / sizeof(int);
    // cout<<size<<endl;

    // for(int i=m+1; i<=size-1; i++)
    // {
    //     int temp=arr[i+1];
    //     arr[i+1]=arr[i];
    //     arr[i]=temp;
    // }
    // int j=size-1;
    // while(i<j)
    // {
    //     swap(arr[i],arr[j]);
    //     i++;j--;
    // }
    //     for(int i=0; i<size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    int arr[]={10 ,4 ,5 ,2 ,3 ,6 ,1 ,3, 6};
    int s=0;
    int e=9;

    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    return 0;
}