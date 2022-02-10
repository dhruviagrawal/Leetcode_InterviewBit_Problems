//Ques link- https://leetcode.com/problems/subarray-sum-equals-k/

/*
1. brute O(n^2)
2. Note-
subarry ques
sliding window when max/min length
2 ptr when we need pairs
prefix sum when count needed

3. so tc O(n^2) sc O(n^2)
prefix sum
https://www.youtube.com/watch?v=XjP2mQr98WQ 
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int s=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            if(s==k)
                count++;
            if(mp.find(s-k)!=mp.end())
            {
                count+=mp[s-k];
            }
            mp[s]++;
        }
        return count;
    }
};