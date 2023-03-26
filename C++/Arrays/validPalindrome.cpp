#include <iostream>
using namespace std;
bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    else
        return false;
}

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z' || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    int st = 0;
    int e = s.size() - 1;

    while (st < e)
    {
        if (s[st] == s[e])
        {
            st++;
            e--;
        }
        else
            return false;
    }
    return true;
}

bool isPalindrome(string s)
{
    string temp="";
    // VALID STRING WITH NO SPECIAL CHARACTERS
    for(int i=0; i<s.size(); i++)
    {
        if(valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    // TO LOWER CASE
    for(int i=0; i<s.size(); i++)
    {
        temp[i]=toLowerCase(s[i]); //LOWER CASE STRING
    }

    return checkPalindrome(temp);
}



int main()
{
    string str;
    cout << "Enter Name::";
    cin >> str;
    int count = 0;
    int s = 0;
    for (int i = 0; str[i] != '\0'; i++)
        count++;
    cout<<"THe String is palindrome::: "<<isPalindrome(str);
    return 0;
}