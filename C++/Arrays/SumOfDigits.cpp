#include <iostream>
using namespace std;

int main()
{
    // for(int i=0;i<5;i--)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << endl;
    //     if (i & 1)
    //     {
    //         continue;
    //     }
    //     i++;
    // }
    // for(int i = 0; i < 5; i++)
    // {
    //     for(int j = i; j <=5;j++)
    //     {
    //         cout<<i<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    int n=234;
    int n1,proud=1,sum=0;
    while(n>0)
    {
        n1=n%10;//4
        n=n/10;
        proud*=n1;
        sum+=n1;
    }
    cout<<proud<<endl;
    cout<<sum<<endl;
    return 0;
}