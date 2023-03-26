#include <iostream>
using namespace std;
void reverse(char name[], int size)
{
    int s = 0;
    int e = size - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}


char toLowerCase(char name)
{
    if(name>='a' && name<='z' || (name>='0' && name<='9'))
    {
        return name;
    }
    else
    {
        char temp =name-'A'+'a';
        return temp;
    }
}


bool palindrome(char name[], int size)
{
    int s = 0;
    int e = size - 1;

    while (s < e)
    {
        if (toLowerCase(name[s]) == toLowerCase(name[e]))
        {
            s++;
            e--;
        }
        else
            return false;
    }
    return true;
}


int main()
{
    char name[20];
    cout<<"Enter Name::";
    cin>>name;
    int count = 0;
    int s = 0;
    for (int i = 0; name[i] != '\0'; i++)
        count++;

    //////////////////////////REVERSE///////////////////////////

    reverse(name, count);

    /////////////////////////PALINDROME////////////////////////

    cout << "This String Is Palindrome::" << palindrome(name, count);

    // CASE 1) Not Case Sensitive


    return 0;
}