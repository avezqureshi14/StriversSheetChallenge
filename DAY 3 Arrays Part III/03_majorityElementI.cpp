#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int majorityElementI(vector<int>nums){
    int currentEle;
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            currentEle = nums[i];
        }
        if (nums[i] == currentEle)
        {
            count++;
        }
        else{
            count--;
        }
    }
    return currentEle;    
}
int main()
{
    vector<int>nums = {3,2,3};
    cout<<majorityElementI(nums);
    return 0;
}