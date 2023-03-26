#include <iostream>
using namespace std;
void printArray(int *arr1, int s)
{
    for (int i = 0; i < s; i++)
        cout << arr1[i] << " ";
}

void moveZeros(int *arr, int i)
{
    int s = 0;
    int e = i - 1;

    while (s <= e)
    {
        if (arr[s] != 0)
            s++;

        else if (arr[s] == 0 && arr[e] != 0)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
        else
        {
            // when arr[e]==0 and arr[s] is also == 0
            e--;
        }
    }
}
int main()
{
    int arr[21] = {1, 0, 1, 0, 45, 0, 23, 0, 45, 1, 75, 0, 12, 87, 0, 12, 0, 0, 0, 5, 6};
    cout<<"BEFORE SORTING"<<endl;
    printArray(arr,21);
    cout<<endl;
    moveZeros(arr, 21);
    cout<<"AFTER SORTING::"<<endl;
    printArray(arr,21);
    return 0;
}