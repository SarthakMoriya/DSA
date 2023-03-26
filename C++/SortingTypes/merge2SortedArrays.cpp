#include <iostream>
#include <array>
using namespace std;
void merge(int *arr1, int *arr2, int n, int m, int *arr3)
{
    // vector <int>arr3[20];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<m)
    {
        arr3[k++]=arr2[j++];
    }
}
int main()
{
    int arr1[10] = {1, 5, 7, 8, 9, 10, 12, 15, 17, 18};
    int arr2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int arr3[20] ;
    merge(arr1, arr2, 10, 10, arr3);
    for(int i=0;i<20;i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}