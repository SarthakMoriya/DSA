#include<iostream>
using namespace std;
int mountain(int arr[],int size,int start,int end)
{
    int s=start;
    int e=end;
    int mid=(s+e)/2;

    //Base Case
    if(s>=e)
    return s;

    if(arr[mid]<arr[mid+1])
    {
        s=mid+1;
        return mountain(arr,size,s,e);
    }
    else
    {
        e=mid;
        return mountain(arr,size,s,e);
    }
}
int main(){
    int arr[5]={5,6,7,1,2};
    int size=5;
    int s=0;
    int e=4;
    cout<<mountain(arr,size,s,e);   
    return 0;
}