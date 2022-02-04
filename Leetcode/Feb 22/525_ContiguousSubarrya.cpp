//Ques link- https://leetcode.com/problems/contiguous-array/

/*
brute O(n^2)- form all subrarray and check

optimal-
ques can be converted to subarray sum=0
so make all zero as -1 so equal number of 1s and 0s,  
makes sum=0

now iterate
in map store <sum,index at which it appeared first>
so tells us when sum occured last time so rest sum=0

therefore if subarry is from first index=i+1
else it is i-sum[i] (elements whose sum were zero giving same sum again)

TC O(N)
SC O(N)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) nums[i]=-1;
        }
        unordered_map<int,int>mp;
        int maxlen=0,sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum==0)
                maxlen=max(maxlen,i+1);
                
            if(mp.find(sum)!=mp.end())
                maxlen=max(maxlen,i-mp[sum]);
            
            else
                mp[sum]=i;
        }
        return maxlen;
    }
    }
};