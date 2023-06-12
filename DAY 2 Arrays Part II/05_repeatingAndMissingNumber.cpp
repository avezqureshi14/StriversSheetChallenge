#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int>missingRepeatedNumber(vector<int>nums){
    int n = nums.size();
    int hash[n+1] = {0};

    //update the hash array
    for (int i = 0; i < n; i++)
    {
        hash[nums[i]]++;
    }
    
    //find the repeating and missing number
    int repeating = -1, missing = -1;
    for (int i = 0; i <= n; i++)
    {
        if (hash[i] == 2)
        {
            repeating = i;
        }
        else if(hash[i] == 0){
            missing = i;
        }

        if (repeating != -1 && missing != -1)
        {
            break;
        }
    }
    return {repeating,missing};    
}
int main()
{
    vector<int>nums = {3,1,2,5,6,7,5};
    for(auto i : missingRepeatedNumber(nums)){
        cout<<i<<" ";
    }
    return 0;
}