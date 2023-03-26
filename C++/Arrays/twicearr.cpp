// 1 2 2 3 4 5 ===> 2

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 10, 11, 5, 9, 7, 12, 14, 4, 8, 5, 1, 6, 13, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = i + 1;
    while (i < size)
    {
        while (j < size)
        {
            if (arr[i] == arr[j])
                cout << arr[i] << " ";

            else
            {

                j++;
            }
        }
    i++;
    }

    return 0;
}