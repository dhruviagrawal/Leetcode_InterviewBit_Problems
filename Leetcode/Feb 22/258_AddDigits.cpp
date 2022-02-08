//Ques link- https://leetcode.com/problems/add-digits/

/*
1. trivial count etc
2. 1-9 keeps repeating, so 23=23-9=14=14-9=5 so 23,14,5==5 sum! can keep decreasing by 9 till its between 1-9 
   TC O(n)
3. mathematical proof-
    https://www.youtube.com/watch?v=s3ImXPT6yFg 
    method is coded Tc O(1) SC O(1)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        // if(num==0) return 0;
        // while(num>9)
        // {
        //     num-=9;
        // }
        // return num;
        
        if(num == 0) return 0;
        if(num % 9 == 0) return 9;
        return (num % 9);
    }
};