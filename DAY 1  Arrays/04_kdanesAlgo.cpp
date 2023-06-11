#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>&nums){
    int sum = 0;
    int maxSum = INT_MIN;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        sum = sum + nums[i];
        maxSum = max(sum,maxSum);        
    }
    return maxSum;
}

int main()
{
    vector<int>nums = {5,4,-1,7,8};
    cout<<maxSubarray(nums);
    return 0;
}