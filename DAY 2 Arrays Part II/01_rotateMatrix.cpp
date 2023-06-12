#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>>&matrix){
    int m = matrix.size(); //rows
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < m; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        } 
    }

    for (int i = 0; i < m; i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

void print(vector<vector<int>> matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Before Rotating" << endl;
    print(matrix);
    cout << "After Rotating" << endl;
    rotateMatrix(matrix);
    print(matrix);
    return 0;
}