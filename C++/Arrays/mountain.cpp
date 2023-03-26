#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int e = size - 1;
    int s = 0;
    int mid = (s + e) / 2;
    int ans = 1;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            ans = mid;
            e = mid;
        }
        mid = (s + e) / 2;
    }
    cout << ans << " ";
    return 0;
}