#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if (sum == 9)
                {
                    cout << "Triplet Trio:::" << arr[i] << " " << arr[j] << " " << arr[k]<<endl;
                }
            }
        }
    }
    return 0;
}