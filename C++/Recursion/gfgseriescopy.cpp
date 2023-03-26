#include <iostream>
#include <vector>
using namespace std;
void printarr(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

vector<int> printSeries(vector<int> arr, int n)
{
    if (n <= 2)
    {
        // printarr(arr, n);
        arr.push_back(0);
        arr.push_back(1);
        return;
    }

    printSeries(arr, n - 1);
    int ans = (arr[n - 2] * arr[n - 2]) - arr[n - 1];
    arr.push_back(ans);

    return arr;
}
int main()
{
    vector<int> arr;
    // arr.push_back(0);
    // arr.push_back(1);
    int n;
    cin >> n;
    vector<int> ans = printSeries(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ans[i] << " ";
    // }
    printarr(arr,n);
    return 0;
}