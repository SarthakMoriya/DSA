/*
123
456
789
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    i = 1;
    int count = 1;
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {

            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}