#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr1[4] = {9, 9, 9, 9};
    int arr2[3] = {1, 9, 8};

    vector<int> v;

    int carry = 0;
    int i = 3;
    int j = 2;

    while (i >= 0 && j >= 0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];

        // CALCULATED SUM AND CARRYOVER
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;

        v.push_back(sum);

        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        i--;

        v.push_back(sum);
    }

    while (j >= 0)
    {
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        j--;
        v.push_back(sum);
    }

    while (carry != 0)
    {
        int sum = carry;
        carry = carry / 10;

        v.push_back(sum);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    cout<<"AFTER REVERSING"<<endl;
    i = 0;
    j = v.size() - 1;
    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}