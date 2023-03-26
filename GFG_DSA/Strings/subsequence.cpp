#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "ABCDEFGHI";
    string s2 = "ADBADFTHVFDWESDSDqwds";
    bool isSeq = false;
    int a=0;
    int b=0;
    while(a<s1.length() && b<s2.length())
    {
        if(s1[a]==s2[b])
        {
            b++; a++; isSeq=true;
        }
        else{
            a++;
            isSeq=false;
        }
    }

    if( b==s2.length())
        cout<<"Trueeeeeeeeee";
    else
        cout<<"Falseeeeeeeee";
    return 0;
}