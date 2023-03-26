/*
1
22
333
4444
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    i = 1;
    int count=1;
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    while (i <= n)
    {
        j=1;
        while (j <= i)
        {
            cout <<i<<" ";
            j++;
        }
        cout<<endl;
        count++;
        i++;
    }
    return 0;
}