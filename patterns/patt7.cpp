/*
1
2 3
4 5 6
7 8 9 10
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
            cout <<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        
        i++;
    }
    return 0;
}