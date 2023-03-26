#include <iostream>
#include <math.h>
using namespace std;
int power(int n)
{
    if (n == 0)
        return 1;

    // int small=power(n-1);
    // int big=2*small;
    // return pow(2,power(n-1));
    // return big;

    return 2 * power(n - 1);
}

void counting(int n)
{
    if (n == 0)
    {
        return;
    };
    counting(n - 1);
    cout << n << " ";
}

void reachHome(int n)
{
    if (n == 0)
    {
        cout << "reachedHome";
        return;
    }
    cout << "Steps Remaining " << n << endl;
    reachHome(n - 1);
}

int fibonacci(int n)
{
    int count = 0;
    while (count < n)
    {
        if (n == 0)
        {
            cout << n;
            count++;
            return;
        }
        
    }
}
int main()
{
    int n, dest;
    // cin>>dest;
    cin >> n;
    // cout<<power(n);
    // counting(n);
    // reachHome(dest);
    fibonacci(n);
    return 0;
}