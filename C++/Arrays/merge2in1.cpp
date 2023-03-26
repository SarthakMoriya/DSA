#include <iostream>
// #include <bits/
using namespace std;
void printArray(int *arr1, int s)
{
    for (int i = 0; i < s; i++)
        cout << arr1[i] << " ";
}

void insertVal(int arr1[], int i, int s1, int arr2[], int j, int s2)
{
    for (int k = s1 - 1; k >= i; k--)
    {
        arr1[k + 1] = arr1[k];
        printArray(arr1, 10);
        cout<<endl;
    }

    arr1[i] = arr2[j];
}

void insert(int arr1[], int s1, int arr2[], int s2)
{
    int i = 0; // 0--1clear
    int j = 0;
    while (i < s1 && j < s2)
    {
        if (arr1[i] <= arr2[j])
            i++;
        // else if (arr1[i] > arr2[j])
        else
        {
            cout<<"First Insertion::"<<endl;
            insertVal(arr1, i, s1, arr2, j, s2);
            j++;
        }
    }
}

int main()
{
    int arr1[10] = {5, 7, 9, 11, 13, 15, 17};
    int arr2[3] = {6, 8, 10};
    // cout << "!@#";
    insert(arr1, 10, arr2, 3);
    printArray(arr1, 10);
    return 0;
}