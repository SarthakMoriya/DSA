#include <iostream>
using namespace std;
void input(int arr[][4], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void show(int arr[][4], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int sum(int arr[][4], int rows, int cols)
{
    int maxi = -1;
    int Sum = 0;
    int temp = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Sum += arr[i][j];
        }
        temp = Sum;
        Sum = 0;

        if (maxi < temp)
        {
            maxi = temp;
        }
    }
    return maxi;
}

bool linearSearch(int arr[][4], int rows, int cols, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
                return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];
    int rows = 3;
    int cols = 4;
    input(arr, rows, cols);
    // cout << "Sum:::" << sum(arr, rows, cols) << endl;
    // show(arr, rows, cols);
    cout << linearSearch(arr, rows, cols, 5);
    return 0;
}