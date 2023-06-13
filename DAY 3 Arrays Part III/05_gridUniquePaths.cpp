#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countPaths(int i, int j, int n, int m){
    int ans = 0;
    if (i == (n - 1) && j == (m - 1))
    {
        return 1;
    }
    if (i >= n || j >= m)
    {
        return 0;
    }
    else
    {
        ans = countPaths(i + 1, j, n, m) + countPaths(i, j + 1, n, m);
    }

    return ans;
}

int uniquePaths(int m, int n)
{
    return countPaths(0, 0, m, n);
}

int main()
{
    cout<<uniquePaths(3,7);    
    return 0;
}