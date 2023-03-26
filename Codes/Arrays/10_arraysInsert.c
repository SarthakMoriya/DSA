#include <conio.h>
#include <stdio.h>
int indInsertion(int arr[], int size, int capacity, int index, int element)
{
    if (size == capacity)
        printf("Insertion cannot Occur!!!");

    else
    {
        printf("Insertion is Possible\n");
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
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
    int capacity = 100, index = 2, element = 35, size = 5;
    indInsertion(arr, size, capacity, index, element);
    size += 1;
    display(arr, size);
}