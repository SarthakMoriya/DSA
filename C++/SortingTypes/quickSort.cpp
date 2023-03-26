#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }
    int pivotIndex = count + s;
    swap(arr[pivotIndex], arr[s]);

    // left and right part solve krna
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}
void quickSort(int *arr, int s, int e)
{
    // Base Case
    if (s >= e)
    {
        return;
    }

    // Partition
    int p = partition(arr, s, e);

    // left Part pe partition
    quickSort(arr, s, p - 1);

    // right Part pe partition
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[11] = {7, 8, 4, 2, 4, 1, 7, 4, 9, 8, 6};
    int s = 0;
    int e = 10;

    quickSort(arr, s, e);
    for (int i = 0; i < 11; i++)
        cout << arr[i] << " ";
    return 0;
}