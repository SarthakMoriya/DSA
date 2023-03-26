#include <iostream>
using namespace std;
int thirdLargest(int a[], int n)
{
    int i = 0;
    int max1 = 0;
    int max2 = -999999;
    int max3 = -999999;
    // Your code here
    for (i = 0; i < n; i++)
    {
        max1 = max(a[i], a[max1]);
    }
    max1 = i;
    cout << "MAX1::" << max1 << endl;

    for (i = 0; i < n; i++)
    {
        max2 = min(a[i], max1);
    }
    cout << "MAX2::" << max2 << endl;

    for (i = 0; i < n; i++)
    {
        max3 = min(a[i], max2);
    }
    cout << "MAX3::" << max3 << endl;

    return max3;
}
int main()
{
    int arr[] = {2, 4, 1, 5, 3};
    int n = 5;
    cout << thirdLargest(arr, n);
    return 0;
}