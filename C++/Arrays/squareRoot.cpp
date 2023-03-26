#include <iostream>
using namespace std;
int intValue(int n)
{
    int s=0;
    int e=n;
    int mid =(s+e)/2;

    while(s<=e)
    {
        int ans=mid*mid;

        if(ans>n)
        {

            e=mid-1;
        }
        if(ans<n)
        {
            ans=mid;
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return  mid;
}

double percise(int IntVal,int perc,int sq)
{
    double ans=IntVal;
    double factor=1;
    for(int i=0;i<perc;i++)
    {
        factor=factor/10; //0.1
        // cout<<factor<<endl;
        for(double j=ans;j*j<sq;j=j+factor)
        {
            ans=j;
            // cout<<ans<<endl;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of N::";
    cin >> n;
    int IntegerValue;
    IntegerValue = intValue(n);
    cout<<IntegerValue<<endl;
    //Precision
    double perciseVal=percise(IntegerValue,5,n);
    cout<<perciseVal<<endl;
    return 0;
}