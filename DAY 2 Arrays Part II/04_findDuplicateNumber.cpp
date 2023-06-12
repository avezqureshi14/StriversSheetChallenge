#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];
    while (true)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
        if (slow == fast)
        {
            break;
        }
    }
    slow = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << findDuplicate(nums);
    return 0;
}
