#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// this one is optimal for gfg and better for leetcode
bool searchIn2DMatrix(vector<vector<int>> &matrix, int x)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int i = 0;
    int j = m - 1;
    while (i < n && j >= 0)
    {
        if (matrix[i][j] == x)
        {
            return true;
        }
        if (matrix[i][j] > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}

// this one is optimal for leetcode problem
bool searchInMatrix(vector<vector<int>> &matrix, int target)
{
    if (!matrix.size())
    {
        return false;
    }
    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0;
    int high = (n * m) - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        cout<<mid/m<<endl;
        cout<<mid%m<<endl;
        if (matrix[mid / m][mid % m] == target)
        {
            return true;
        }
        if (matrix[mid / m][mid % m] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 15, 6}, {7, 8, 9}};
    if (searchInMatrix(matrix, 15))
    {
        cout << "yeah";
    }
    else
    {
        cout << "nope";
    }

    return 0;
}