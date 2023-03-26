#include <iostream>
#include <array>
using namespace std;
bool possibleSol(int arr[], int size, int k, int mid)
{
    int pagesSum = 0;
    int studentCount = 1;
    for (int i = 0; i < size; i++)
    {
        if (pagesSum + arr[i] <= mid)
        {
            pagesSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > 2 || arr[i] > mid)
            {
                return false;
            }

            pagesSum = arr[i];
        }
        if(studentCount <k)
            return false;
    }
    return true;
}
int allocateBooks(int arr[], int size, int k)
{
    int s = 0;
    int ans = -1;
    int sum = 0;
    // finding our search space
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (possibleSol(arr, size, k, mid))//false --- true ....
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
    int arr[] = {12 ,34 ,67 ,90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    int ans = allocateBooks(arr, size, 2);
    cout<<ans;

    return 0;
}