#include <iostream>
using namespace std;

int main()
{
    string s1 = "geeksfafrgeeks";
    int count[256] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if (count[s1[i]] == 1)
        {
            cout << "Only one count:" << i << " ";
            break;
        }
    }
    return 0;
}