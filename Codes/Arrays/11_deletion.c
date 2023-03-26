#include <conio.h>
#include <stdio.h>
int indDeletion(int arr[], int size, int index)
{

    
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    return 1;
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void main()
{
    int arr[100] = {7, 8, 12, 23, 88};
    int capacity = 100, index = 2, size = 5;
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
}