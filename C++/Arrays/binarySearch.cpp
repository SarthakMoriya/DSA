#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
            return mid;//value returned by function

        else if (arr[mid] > key)
            e = mid - 1;

        else
            s = mid + 1;

        mid = (s + e) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 78;
    cout << "Key is present at index::" << binarySearch(arr, size, key);
    return 0;
}