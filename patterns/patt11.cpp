/*

a a a
b b b
c c c

*/

#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    int row = 1;
    int n;
    cin >> n;

    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
        char A=ch+row-1;
        cout<<A<<" ";
        col++;

        }
        cout<<endl;
        row++;
    }

    return 0;
}