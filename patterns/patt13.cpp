/*
ABC
def
ghi
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cin >> n;
    int val = 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + val;
            cout << ch << " ";
            j++;
            val++;
        }
        cout << endl;
        i++;
    }
    return 0;
}