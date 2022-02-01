//Ques link- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

/*
Keep track of min price and update max profit accordinly.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minPrice=INT_MAX;
        int maxProfit=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int currProfit=prices[i]-minPrice;
            maxProfit=max(maxProfit,currProfit);
            minPrice=min(minPrice,prices[i]);
        }
        if(maxProfit<0) return 0;
        else return maxProfit;
    }
};