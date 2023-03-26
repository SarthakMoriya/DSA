#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    // int sum = 0;
    // cout<<size;
    for (int i = 0; i < size; i++)
    {
        // cout<<i<<" "; 
        for (int j = i + 1; j < size; j++)
        {
            // cout<<j<<" ";
            if ((arr[i]+arr[j]) == 8)
            {
                cout << "Pair Sum:::" << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    return 0;
}