#include<iostream>
using namespace std;
void swapArr(int arr[],int size)
{
	for(int i=0;i<size-1;i=i+2)
	{
		swap(arr[i],arr[i+1]);
	}
    // for(int i=0;i<size;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
}
void printarr(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<' ';
	}
}
int main()
{
	// clrscr();
	int arr[10],size,elements;
	cout<<"Enter size of array";
	cin>>size;
	cout<<"Enter elements of array";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	swapArr(arr,size);
	printarr(arr,size);
	return 0;
}