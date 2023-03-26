#include<iostream>
using namespace std;
int main()
{
	int arr[6]={1,1,2,2,3,3};
	int duplicate=0,unique=0;
	for(int i=0;i<6;i++)
	{
		if(arr[i]==arr[i+1])
		{
			duplicate=duplicate+1;
		}
		else
		{
			unique=arr[i];
		}
	}
	cout<<"duplicate item is "<<duplicate;
	cout<<"unique element is "<<unique;
	return 0;
}