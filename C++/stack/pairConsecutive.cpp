#include <iostream>
#include <stack>
#include <vector>
using namespace std;
bool consecutive(vector<int> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] > ans[i + 1])
            return false;
    }
    return true;
}
int main()
{
    stack<int> s;
    vector<int> ans;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    // cout << ans.size();
    if (ans.size() % 2 != 0)
        ans.pop_back();

    if (consecutive(ans))
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}