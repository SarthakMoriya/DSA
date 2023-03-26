#include <iostream>
using namespace std;

void insert(int arr[], int &s, int pos, int item)
{
    if (pos == s + 1)
    {
        s++;
        arr[pos - 1] = item;
    }
    else
    {
        for (int i = s ; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos-1] = item;
        s++;
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';
}

int main()
{
    int arr[10] = {0};
    int size = 5;
    cout<<"Enter the Elements::";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int pos;
    cout<<"Enter the position to insert::";
    cin>>pos;
    int item = 10;
    insert(arr, size, pos, item);
    printArr(arr,size);
    return 0;
}