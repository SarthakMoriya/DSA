#include <iostream>
using namespace std;

int main()
{
    int arr[3][4];
    int rows = 3;
    int cols = 4;
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = rows - 1;
    int endingCol = cols - 1;

    int count = 0;
    int total = rows * cols - 1;
    cout<<total;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    while (count <= total)
    {
        // Printing first row
        for (int i = startingCol; i <= endingCol && count<=total; i++)
        {
            cout << arr[startingRow][i] << " count::";
            cout<<count++<<endl;
        }
        startingRow++;
        // Printing Last Column
        for (int i = startingRow; i <= endingRow && count<=total; i++)
        {
            cout << arr[i][endingCol] << " count::";
           cout<< count++<<endl;
        }
        endingCol--;

        // Printing Last Row
        for (int i = endingCol; i >= 0 && count<=total; i--)
        {
            cout << arr[endingRow][i] << " count::";
           cout<< count++<<endl;
        }
        endingRow--;
        // Printing First Col
        for (int i = endingRow; i >= startingRow && count<=total; i--)
        {
            cout << arr[i][startingCol] << " count::";
           cout<< count++<<endl;
        }
        startingCol++;
    }

    return 0;
}