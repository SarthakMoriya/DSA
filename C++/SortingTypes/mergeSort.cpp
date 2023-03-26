#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    // copying Values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
        arr1[i] = arr[mainArrayIndex++];

    mainArrayIndex = mid + 1;

    for (int i = 0; i < len2; i++)
        arr2[i] = arr[mainArrayIndex++];

    // merge 2 arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
            arr[mainArrayIndex++] = arr1[index1++];
        else
            arr[mainArrayIndex++] = arr2[index2++];
    }

    while (index1 < len1)
        arr[mainArrayIndex++] = arr1[index1++];

    while(index2 < len2)
        arr[mainArrayIndex++] = arr2[index2++];
}

void mergeSort(int *arr, int s, int e)
{
    // base Case
    if (s >= e)
        return;

    // Calculating Mid
    int mid = (s + e) / 2;
    // left Part pe Merge Sort
    mergeSort(arr, s, mid);

    // right Part Pe Merge Sort
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}
int main()
{
    int arr[7] = {6, 7, 4, 9, 2, 5, 1};
    int s = 0;
    int e = 6;
    mergeSort(arr, s, e);

    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    return 0;
}