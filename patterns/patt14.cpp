/*
ABC
bcd
cde
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 0, n;
    cin >> n;
    
    while (i < n)
    {
        int val = i;
        int j = 0;
        while (j < n)
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