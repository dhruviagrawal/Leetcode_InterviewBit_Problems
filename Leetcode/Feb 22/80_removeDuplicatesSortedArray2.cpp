//Ques link- https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

/*
Tc O(n)
sc O(1)
checks i and i-2 elements are same or not n handle likewise
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int a:nums)
        {
            if(i==0 || i==1 || nums[i-2]!=a)
            {
                nums[i]=a;
                i++;
            }
        }
        return i;
    }
};