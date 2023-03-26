/*
321
321
321

*/
/*
1234
1234
1234
1234
*/

#include<iostream>
using namespace std;

int main(){
    int i,j;
    i=1;
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    while(i<=n)
    {
        j=n;
       while(j>0)
       {
        cout<<j<<" ";
        j--;
       }
       cout<<endl;
       i++;
    }
    return 0;
}