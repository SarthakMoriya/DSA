#include <iostream>
using namespace std;

void input(int arr[], int size)
{
    cout << "Enter the elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void traversal(int arr[], int size)
{
    cout << "\nPrinting the elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int getMax(int arr[], int size)
{
    int maxi = 0;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
        maxi = max(arr[i], maxi);
    }
    cout << "MAX:::" << maxi << endl;
}

int getMin(int arr[], int size)
{
    int mini = 10000;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
        mini = min(arr[i], mini);
    }

    cout << "MIN:::" << mini << endl;
}

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Sum:" << sum << endl;
}

void linearSearch(int arr[], int size, int e)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == e)
        {
            cout << "Element Found at index::" << i<<endl;
            count++;
        }
    }
    if(count>1)
    cout << "Element Found " << count << " times";
}

void reverseArray(int arr[], int size)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;end--;
    }
}
void alternateReversal(int arr[], int size)
{
    int e1=0;
    int e2=1;

    while(e2<size)
    {
        swap(arr[e1],arr[e2]);
        e1=e1+2;
        e2=e2+2;
    }
}

// void unique(int arr[], int size)
// {
//     int count=0;
//     int val=0;
//     for(int i=0;i<size;i++)
//     {
//         val=arr[i];
//         if()
//     }
// }
int main()
{
    // int a[20], n;
    // cout << "Enter size of array:";
    // cin >> n;
    int n=234;
    int n1,proud=1,sum=0;
    while(n>0)
    {
        n1=n%10;//4
        n=n/10;
        proud*=n1;
        sum+=n1;
    }
    cout<<proud<<endl;
    cout<<sum<<endl;
    int diff=proud-sum;
    cout<<diff<<endl;

    // input(a, n);
    // traversal(a, n);
    // getMin(a, n);
    // getMax(a, n);
    // cout << "MAX::" << getMax(a, n);
    // cout << "MIN::" << getMin(a, n);
    // sum(a, n);
    // linearSearch(a, n,20);
    // reverseArray(a,n);
    // alternateReversal(a,n);
    // unique(a,n);
    // traversal(a, n);
    return 0;
}