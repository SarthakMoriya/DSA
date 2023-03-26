#include <conio.h>
#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("Element::%d was found at %d index\n", element, i);
        }
    //  return -1;
    }

}
int binarySearch(int arr[],int size, int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high)
    {
    mid=(low+high)/2;
    if(arr[mid]==element)
    {
        return mid;
    }
    if(element>arr[mid])
    {
        low=mid+1;
    }
    if(element<arr[mid])
    {
        high=mid-1;
    }
    }
    //Searching Ends
    return -1;
}
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 12, 13, 14, 15, 16};
    int size, element=10, index;
    size=sizeof(arr)/sizeof(int);//size=16 index=16-1=15;
    // linearSearch(arr,size,element);
    int searchIndex = binarySearch(arr,size,element);
    printf("The element %d was found at index %d\n",element,searchIndex);

}