#include <iostream>
using namespace std;

int firstPosition(int arr[], int size, int s, int e, int k, int ans)
{
    int start = s;
    int end = e;
    int mid = (start + end) / 2;
    int a = ans;

    // Base Case
    if (start > end)
        return a;

    if(arr[mid] == k)
    {
        a=mid;
        end=mid-1;
        a=firstPosition(arr,size,start,end,k,a);
    }

    else if(arr[mid] >k)
    {
        end=mid-1;
        a=firstPosition(arr,size,start,end,k,a);
    }
    else
    {
        start=mid+1;
        a=firstPosition(arr,size,start,end,k,a);

    }
    return a;
}

int lastPosition(int arr[], int size, int s, int e, int k, int ans)
{
    int start = s;
    int end = e;
    int mid = (s + e) / 2;
    cout<<"Mid::"<<mid<<endl;

    int a = ans;

    // Base Case
    if (start > end)
        return a;

    if(arr[mid] == k)
    {
        a=mid;

        start=mid+1;
        a=lastPosition(arr,size,start,end,k,a);
    }

    else if(arr[mid] >k)
    {
        end=mid-1;
        a=lastPosition(arr,size,start,end,k,a);
    }
    else
    {
        start=mid+1;
        a=lastPosition(arr,size,start,end,k,a);

    }
    return a;
}

int main()
{
    int arr[11] = {1, 1, 2, 2, 3, 3, 3, 3, 3, 3, 4};
    int k = 3;
    int ans = -1;
    int s = 0;
    int e = 10;
    cout << firstPosition(arr, 11, s, e, k, ans)<<endl;
    cout << lastPosition(arr, 11, s, e, k, ans);
    return 0;
}