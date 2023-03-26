#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[index] > nums[j])
            {
                index = j;
            }
        }
        swap(nums[i], nums[index]);
    }
}

void display(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;
}

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    // sort(nums);
    // for (int i = 0; i < nums.size() - 1; i++)
    // {
    //     for (int j = i+1; j < nums.size(); j++)
    //     {
    //         if (nums[i] == nums[j] && abs(i - j) <= k)
    //             return true;
    //     }
    // }
    int i = 0;
    int j = i + 1;
    while (i < nums.size() && j < nums.size() - 1)
    {
        if (nums[i] == nums[j] && abs(i - j) <= k)
            return true;
        else
        {
            i++; j++;
        }
    }
    return false;
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    display(nums);
    cout << containsNearbyDuplicate(nums, 2) << endl;
    display(nums);
    return 0;
}