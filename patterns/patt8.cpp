/*
1
2 3
3 4 5
4 5 6 7
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    i = 1;
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    while (i <= n)
    {
        int count = i;
        j = 1;
        while (j <= i)
        {
            cout << count << " ";
            j++;
            count++;
        }
        cout << endl;

        i++;
    }
    return 0;
}