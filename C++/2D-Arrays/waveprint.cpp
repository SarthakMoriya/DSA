#include <iostream>
#include <array>
using namespace std;
void wavePrint(int arr[][4], int rows, int column)
{
    int col = 0;
    for (col = 0; col < column; col++)
    {
        if (col & 1)
        {
            // ODD INDEX
            for (int index = rows - 1; index >= 0; index--)
            {
                cout << arr[index][col]<<" ";
            }
        }
        else
        {
            for (int index = 0; index < rows; index++)
            {
                cout << arr[index][col]<<" ";
            }
        }
    }
}
int main()
{
    int row = 3;
    int col = 4;
    int arr[3][4];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    wavePrint(arr, row, col);

    return 0;
}