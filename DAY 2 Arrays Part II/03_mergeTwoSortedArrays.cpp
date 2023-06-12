#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&nums1, int n, vector<int>&nums2, int m){
    int i = n - 1;
    int j = m - 1;
    int k = m + n - 1;
    while (i >= 0 && j >= 0) 
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        else{
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        
    }

    while (i >= 0)
    {
        nums1[k] = nums1[i];
        i--;
        k--;
    }

    while (j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
    
}   

void print(vector<int>nums){
    for(auto i : nums){
        cout<<i<<" ";
    }
}
int main()
{
    vector<int>nums1 = {1,2,3,0,0,0};
    vector<int>nums2 = {2,5,6};
    int n = 3;
    int m = 3;
    merge(nums1,n,nums2,m); 
    print(nums1);
    return 0;
}