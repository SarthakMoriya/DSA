#include<iostream>
using namespace std;
void traversal(int *arr,int n)
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                traversal(arr,n);
            }
        }
    }
}
int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    int size=10;
    bubbleSort(arr,size);
    return 0;
}