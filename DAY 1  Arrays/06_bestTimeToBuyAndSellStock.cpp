#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int buyAndSellStock(vector<int>&prices){
    int minPrice = prices[0];
    int maxPrice = prices[0];
    int n = prices.size();
    int maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        if (prices[i] < minPrice) 
        {
            minPrice = prices[i];
            maxPrice = prices[i];
        }
        else if(prices[i] > maxProfit){
            maxPrice = prices[i];
            maxProfit = max(maxProfit,maxPrice - minPrice);
        }
    }
    return maxProfit;
}
int main()
{
    vector<int>prices = {7,1,5,3,6,4};
    cout<<"Max Profit is "<<buyAndSellStock(prices);
    return 0;
}