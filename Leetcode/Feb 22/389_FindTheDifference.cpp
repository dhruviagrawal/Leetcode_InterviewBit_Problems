//Ques link- https://leetcode.com/problems/find-the-difference/

/*
1. hashmap <char,count> of s and then check with t 
    Tc O(N) SC O(N)
2. sum of ascii value of s- sum of ascii value of t = ascii of extra char in t
    tc O(N)  sc O(1)
3. Tc O(nlog n)+O(n) Sc O(1)
    sort both strings and check not similar element
4. using xor
    xor of two similar char, cancels out
		res=res^s.charAt(i++)
		res=res^t.charAt(i++)
		final res is ascii of extra charcter in t
		tc O(N) sc O(1)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // char findTheDifference(string s, string t) {
    //     sort(s.begin(),s.end());
    //     sort(t.begin(),t.end());
    //     for(int i=0;i<s.size();i++)
    //     {
    //         if(t[i]!=s[i])return t[i];
    //     }
    //     return t[t.size()-1];
    // }
    
    char findTheDifference(string s, string t) {
        int i;
        int res=0;
        for(i=0;i<s.size();i++)
        {
            res=res ^ s[i];
            res=res ^ t[i];
        }
        res=res ^ t[i];
        return (char)res;
    }
};