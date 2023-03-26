#include <iostream>
using namespace std;
void traversal(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

        cout<<endl;
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j=i-1;
        int temp = arr[i];
        // cout<<arr[i]<<" "<<arr[temp]<<endl;
        for (; j >= 0; j--)
        {
            // cout<<j<<endl;
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                traversal(arr, n);
            }
            else
            {
                break;
            }
            // cout<<j<<endl;
            // cout<<arr[j+1]<<endl;
            // cout<<arr[temp]<<endl;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, 7);
    traversal(arr,size);
    return 0;
}