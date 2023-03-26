#include<iostream>
using namespace std;

int main(){
    int ans=0;
    int array[]={2,3,1,6,3,2};
    for(int i=0; i<7;i++)
    {
        ans=ans^array[i];
        cout<<ans<<endl;
    }
    cout<<ans;
    return 0;
}