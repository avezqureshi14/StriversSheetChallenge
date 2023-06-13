#include <iostream>
#include <bits/stdc++.h>
using namespace std;
double powxn(int x, int n){
    double ans = 1.0;
    int num = n;
    if (num < 0)
    {
        num = -(num);
    }
    while (num)
    {
        if (num%2)
        {
            ans = ans * x;
            num = num - 1;
        }
        else{
            x = x * x;
            num = num / 2;
        }
    }
    if (n < 0)
    {
        ans = double(1.0)/double(ans);
    }
    
    return ans;    
}
int main()
{
    int x = 2;
    int n = 2;
    cout<<powxn(4,-3);
    return 0;
}