/*
https://leetcode.com/problems/decode-ways/

https://www.youtube.com/watch?v=mNhDC-zDt1Q

A message containing letters from A-Z is being encoded to numbers using the following mapping:

'A' -> 1
'B' -> 2
...
'Z' -> 26
Given a non-empty string containing only digits, determine the total number of ways to decode it.

Example 1:

Input: "12"
Output: 2
Explanation: It could be decoded as "AB" (1 2) or "L" (12).
Example 2:

Input: "226"
Output: 3
Explanation: It could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).
*/

class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        if(s[0]>'0' and s[0]<='9'){
            dp[1]=1;
        }
        for(int i=1;i<n;i++){
            if(s[i]>='1' and s[i]<='9'){
                dp[i+1]+=dp[i];
            }
            int x = 10*(s[i-1]-'0')+s[i]-'0';
            if(x>=10 and x<=26){
                dp[i+1]+=dp[i-1];
            }
        }
        return dp[n];
    }
};
