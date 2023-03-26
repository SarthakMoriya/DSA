#include <iostream>
using namespace std;
// 1 2 2 3 3 4 4 5
// ANS::: 2,3,4
int main()
{
    int arr[] = {1, 2, 2, 3, 3,3, 4, 4,4, 5};
    int ans[10];
    int size = sizeof(arr) / sizeof(int);
    int count = 1;
    int i = 0;

    for (i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            // cout << arr[j] << " ";
            
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        // cout << "\nARR[" << i << "]::" << count << endl;
         if (count > 2)
    {
        count = 0;
    }
    // cout << "Count:::" << count << endl;
    if (count == 2)
    {
        cout << "\nARR[" << i << "]="<<arr[i]<<"...Count:::" << count << endl;
        
        count = 1;
        
        // cout << count << endl;
    }
    }
    // cout<<"\n"<<i;
   
    return 0;
}