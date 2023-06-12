#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long getInversions(long long *arr, int n)
{
    long long cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int conquer(vector<int> &nums, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> ans;
    int cnt = 0;
    while (left <= mid && right <= high)
    {
        if (nums[left] <= nums[right])
        {
            ans.push_back(nums[left]);
            left++;
        }
        else
        {
            ans.push_back(nums[right]);
            cnt += (mid-left+1);
            right++;
        }
    }
    while (left <= mid)
    {
        ans.push_back(nums[left]);
        left++;
    }
    while (right <= high)
    {
        ans.push_back(nums[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        nums[i] = ans[i-low];
    }
    return cnt;
}

int divide(vector<int> &nums, int low, int high)
{
    int cnt = 0;
    if (low == high)
    {
        return cnt;
    }
    int mid = low + (high - low) / 2;
    cnt += divide(nums, low, mid);
    cnt += divide(nums, mid + 1, high);
    cnt += conquer(nums,low,mid,high);
    return cnt;
}

int mergeSort(vector<int> &nums)
{
    int n = nums.size();
    return divide(nums, 0, n - 1);
}


int main()
{
    long long arr[] = {2, 5, 1, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout<<getInversions(arr,n);
    vector<int> nums = {2, 5, 1,3,4};
    cout<<mergeSort(nums);
    return 0;
}