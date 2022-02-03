//Ques link- https://leetcode.com/problems/4sum-ii/

/*
brute O(n^4)

better O(n^3)-
3 loops, 1 map
map stores all elements of last array and its frequency

optimal-
TC O(n^2)
SC O(n^2)
2 loops, 1 map
map has sum of pairs of all elements of nums3 and nums4
amd then check each time.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int ans=0;
        unordered_map<int,int>mp;
        for(int k:nums3)
        {
            for(int l:nums4)
            {
                mp[k+l]++;
            }
        }
        
        for(int i:nums1)
        {
            for(int j:nums2)
            {
                int t=0-(i+j);
                if(mp.find(t)!=mp.end())
                    ans+=mp[t];
            }
        }
        return ans;
    }
};