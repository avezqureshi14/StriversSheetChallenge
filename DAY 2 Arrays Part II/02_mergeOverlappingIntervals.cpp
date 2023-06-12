#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    int n = intervals.size();
    vector<vector<int>> ans;
    if (n == 0 || n == 1)
    {
        return intervals;
    }
    vector<int> tempInterval = intervals[0];
    for (int i = 0; i < n; i++)
    {
        if (tempInterval[1] >= intervals[i][0])
        {
            tempInterval[1] = max(tempInterval[1], intervals[i][1]);
        }
        else
        {
            ans.push_back(tempInterval);
            tempInterval = intervals[i]; 
        }
    }
    ans.push_back(tempInterval);
    return ans;
}
int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    for (auto i : mergeIntervals(intervals))
    {
        cout << "[";
        for (auto j : i)
        {
            cout << j << ", ";
        }
        cout << "]";
    }
    return 0;
}