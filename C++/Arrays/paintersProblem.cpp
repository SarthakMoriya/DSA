#include <iostream>
using namespace std;

bool possibleSol(int arr[], int size, int k, int mid)
{
    int blocks = 0;
    int paintersCount = 1;
    for (int i = 0; i < size; i++)
    {
        if (blocks + arr[i] <= mid)
        {
            blocks += arr[i];
        }
        else
        {
            paintersCount++;
            if (paintersCount > k || arr[i] > mid)
            {
                return false;
            }
            blocks = 0;
            blocks += arr[i];
        }
    }
    return true;
}


int allocatePainters(int arr[], int size, int k)
{
    int s = 0;
    int ans=0;
    int e, sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    e = sum;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (possibleSol(arr, size, k, mid)) // false --- true ....
        {
            e = mid - 1;
            ans = mid;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {5, 15, 5, 5};
    int k = 2;
    int size = sizeof(arr) / sizeof(int);
    int ans = allocatePainters(arr, size, k);
    cout<<ans;
    return 0;
}