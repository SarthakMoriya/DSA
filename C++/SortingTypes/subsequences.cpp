#include <iostream>
#include <vector>
#include <string>
#include <array>
using namespace std;
void solve(string str, int index, string output, vector<string> &ans)
{
    // int length=sizeof(num)/sizeof(vector<int>);
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
            return;
    }
    // cout<<"in";
    // Exclude
    solve(str, index + 1, output, ans);

    // Include
    // char element = str[index];
    output.push_back(str[index]);
    solve(str, index + 1, output, ans);
}
int main()
{
    string str = "abc";
    // cout<<str.length();
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, index, output, ans);
    // cout<<"Helllow";
    for(int i=0;i<ans.size();i++)
    {
        std::cout<<ans.at(i)<<" ";
    }
    return 0;
}