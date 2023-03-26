#include <iostream>
using namespace std;

void reverseWord(char s[], int i, int st)
{
    int end = i - 1;
    int start = st;

    while (start <= end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

int main()
{
    char s[] = "my name is tutu ";
    int size = sizeof(s) / sizeof(s[0]);
    cout << size << endl;
    int st = 0;
    int e = -1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            // cout << i << " ";
            reverseWord(s, i, st);
            st = i + 1;
        }
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        cout << s[i];
    }
    return 0;
}