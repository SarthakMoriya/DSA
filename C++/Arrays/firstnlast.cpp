#include <iostream>
using namespace std;
int firstPosition(int arr[], int k, int size)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        if (arr[mid] > k)
        {
            e=mid-1;
        }
        if(arr[mid]<k)
        {
            s=mid+1;
        }

        mid = (s + e) / 2;
    }
    return ans;
}
int lastPosition(int arr[], int k, int size)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        if (arr[mid] > k)
        {
            e=mid-1;
        }
        if(arr[mid]<k)
        {
            s=mid+1;
        }

        mid = (s + e) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {0, 0, 1, 1, 2, 2, 2, 2};
    int k = 2;
    int size = sizeof(arr) / sizeof(arr[0]);

    int first = firstPosition(arr, 2, size);
    int second = lastPosition(arr, 2, size);
    cout<<first<<" "<<second<<endl;

    int total_values=(second-first)+1;
    cout<<total_values<<endl;

    return 0;
}