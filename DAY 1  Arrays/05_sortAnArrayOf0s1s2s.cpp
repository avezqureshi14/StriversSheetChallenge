#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &nums)
{
    int n = nums.size();
    int mid = 0;
    int low = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}
int main()
{
    vector<int> nums = {0, 2, 1, 2, 0, 1};
    sortColors(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
 
    return 0;
}