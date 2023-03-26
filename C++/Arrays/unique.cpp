// 1 2 3 2 1 ===> 3;

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3,3,4, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans^=arr[i];
    }
    cout<<ans;
    return 0;
}