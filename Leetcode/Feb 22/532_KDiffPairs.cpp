//Ques link- https://leetcode.com/problems/k-diff-pairs-in-an-array/

/*
1. brute 
    two nested loops and for unique can use set
		tc O(n^2)
		
2. better-
    tc O(n log n)
		sort array
		can find k-i using binary search and so on for all i

3. better 2nd-
    tc O(n log n) sc O(1)
		two pointer approach
		sort array
		i=0, j=1
		check a[j]-a[i]==k?
		if diff is less than k, we need to j++
		if diff is greater than k; we need to i++
		we will do for all elements 
		(coded)
		
4.  optimal-
     tc O(N)
		 sc O(N)
		 hashmap
		 <element,count> in hashmap
		 go through array n check if a[i]+k is present in hashmap, if yes count++
		 note- since we want unique pairs, iterate on hashmap keys instead of array
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // int n=a.size();
        // sort(a.begin(),a.end());
        // int i=0,j=1,ans=0;
        // while(i<a.size() && j<a.size())
        // {
        //     int diff=a[j]-a[i];
        //     if(diff==k)
        //     {
        //         ans++;
        //         i++;
        //         j++;
        //         while(j<a.size() && a[j]==a[j-1])
        //             j++;
        //     }
        //     else if(diff>k)
        //     {
        //         i++;
        //         if(j-i==0)
        //             j++;
        //     }
        //     else
        //     j++;
        // }
        // return ans;
        if(k<0) return 0;
        int ans=0;
        unordered_map<int,int>mp;
        for(int x:a)
        {
            mp[x]++;
        }
        for(auto x:mp)
        {
            if((k==0 && x.second>1) || (k && mp.count(x.first+k)))
            {
                ans++;
            }
        }
        return ans;
    }
};