#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool searchIn2D(vector<vector<int>>& matrix, int target){
    int m = matrix[0].size(); //cols
    int n = matrix.size(); //rows
    int i = 0;
    int j = m - 1;
    while (i < n && j>= 0)
    {
        if (matrix[i][j] == target)
        {
            return true;
        }
        if(matrix[i][j] > target){
            j--;
        } 
        else{ 
            i++;
        }
    }
    return false;
}

bool seachIn2DLeet(vector<vector<int>>&matrix, int target){
    int n = matrix.size();
    int m = matrix[0].size();
    int left = 0;
    int right = n * m - 1;
    while (left <= right)
    {
        int mid = left + (right-left) / 2;
        if (matrix[mid/m][mid%m] == target)
        {
            return true;
        }
        if(matrix[mid/m][mid%m] > target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    if (searchIn2D(matrix, 15))
    {
        cout << "yeah";
    }
    else
    {
        cout << "nope";
    }
     return 0;
}