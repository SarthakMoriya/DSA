#include <iostream>
using namespace std;
int Sum(int arr[], int size)
{
    int ans = 0;
    // Base Case
    if (size == 0)
        return 0;

    if (size == 1)
        return arr[0];

    else
    {
        ans += Sum(arr + 1, size - 1) + arr[0];
    }

    return ans;
}

bool checkSort(int arr[], int size)
{
    // Base Case
    if (size == 0 || size == 1)
        return true;

    // Processing
    if (arr[0] > arr[1])
        return false;

    else
    {
        bool ans = checkSort(arr + 1, size - 1);
        return ans;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // int arr[5] = {3, 1, 5, 1, 6};
    int size = 5;
    cout << Sum(arr, size) << endl;

    bool ans = checkSort(arr, size);
    cout << ans;
    return 0;
}