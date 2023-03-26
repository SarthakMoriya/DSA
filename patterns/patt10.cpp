/*
1
2 1
3 2 1 
4 3 2 1
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
            // cout << count << " ";
            cout<<i-j+1;
            j++;
            count--;
        }
        cout << endl;

        i++;
    }
    return 0;
}