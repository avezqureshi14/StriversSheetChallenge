#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int nCr(int n, int r)
{
    n = n - 1;
    r = r - 1;
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

vector<int> generateRow(int n)
{
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for (int i = 0; i < n; i++)
    {
        ans = ans * (n - i);
        ans = ans / (i + 1);
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int row, int col)
{
    vector<vector<int>> triangle;
    for (int i = 0; i < col; i++)
    {
        triangle.push_back(generateRow(i));
    }
    return triangle;
}

int main()
{
    for(auto i : pascalTriangle(7,6)){
        cout<<endl;
        for(auto j : i){
            cout<<j<<" ";
        }
    }
    return 0;
}