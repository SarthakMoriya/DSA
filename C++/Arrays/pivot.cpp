#include <iostream>
using namespace std;
int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {5, 6, 7, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int k = 7;
    int e = size - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    int pivot = s;

    
        if (k >= arr[pivot] && k <= arr[size - 1])
        {
            cout << binarySearch(arr, pivot, size - 1, k);
        }
        else
        {
            cout << binarySearch(arr, 0, pivot, k);
        }
    

    return 0;
}