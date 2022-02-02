//Ques link- https://leetcode.com/problems/find-all-anagrams-in-a-string/

/*
Character frequency map of Anagrams are same!
1. all letters same
2. count of all letters same

Sliding Window Technique-
fixed size
take a pattern vector size 26 to store frequency of each alphabet
make current window vector 
if both vector same, anagram choose starting index.

on changing window, update the vector- removing first ele of window n adding next

TC O(26*n)=O(n)
SC O(1)
*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int np=p.size(),ns=s.size();
        if(np>ns)return ans;
        
        vector<int>freq(26,0);
        vector<int>curr(26,0);
        
        for(int i=0;i<np;i++)
        {
            freq[p[i]-'a']++;//count of each letter
            curr[s[i]-'a']++;
        }
        
        if(freq==curr) ans.push_back(0);
        
        for(int i=np;i<ns;i++)
        {
            //removing first ele of window n adding next
            curr[s[i-np]-'a']--;
            curr[s[i]-'a']++;
            
            if(freq==curr) ans.push_back(i-np+1);
        }
        
        return ans;
    }
};