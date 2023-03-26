#include <iostream>
using namespace std;
int totalSalary(int basic, char grade)
{
    // Write your code here.
    float hra = basic * .2;
    float da = basic * .5;
    float pf = basic * 0.11;
    float allw = 0;
    if (grade == 'A')
        allw = 1700;
    else if (grade == 'B')
        allw = 1500;
    else
        allw = 1300;
    cout << hra << " " << da << " "
         << " " << pf << " " << allw << endl;

    float ans = basic + da + hra - pf + allw;

    cout << "ANS::" << ans << endl;
    // cout << "ANS::" << int(ans) << endl;
    cout << ans - int(ans) << endl;
    
    float ans1=ans-int(ans); // 0-1 ke beech me
    if (ans1 >= 0.50)
        return int(ans) + 1;
    else
        return int(ans);
    // return ((basic*.2) )
}
int main()
{
    cout<<totalSalary(4567, 'B');
    // cout<<int(1.5);
    return 0;
}