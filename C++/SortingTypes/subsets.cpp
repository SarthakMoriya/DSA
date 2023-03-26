#include <iostream>
#include <vector>
#include<array>
using namespace std;
void solve(vector<int> num, int index, vector<int> output, vector<vector<int>> &ans)
{
    // int length=sizeof(num)/sizeof(vector<int>);
    if(index>=num.size())
    {
        ans.push_back(output);
        return;
    }

    //Exclude
    solve(num, index+1, output, ans);

    //Include
    int element=num[index];
    output.push_back(element);
    solve(num, index+1, output, ans);


    
}
int main()
{
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(num, index, output, ans);

        for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }    
        cout << endl;
    }

    return 0;
}