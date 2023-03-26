/*
111
222
333
444
555

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
        j=1;
       while(j<=n)
       {
        cout<<i;
        j++;
       }
       cout<<endl;
       i++;
    }
    return 0;
}