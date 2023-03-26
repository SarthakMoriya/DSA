#include <iostream>
#include<array>
using namespace std;
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void printSeries(int arr[], int n)
{
    if (n == 1)
    {
        printarr(arr, n);
        return;
    }
    if (n == 2)
    {
        printarr(arr, n);
        return;
    }

    int ans = (arr[n - 2] * arr[n - 2]) - arr[n - 1];
    
}
int main()
{
    int arr[15] = {0, 1};
    int n;
    cin >> n;
    printSeries(arr, n);
    // printarr(arr,n);
    return 0;
}