/*
Given an input string, reverse the string word by word.
Example 1:

Input: "the sky is blue"
Output: "blue is sky the"
Example 2:

Input: "  hello world!  "
Output: "world! hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
Example 3:

Input: "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.

*/

class Solution {
public:
    
    string reverseWords(string s) 
    {
        //reverse the whole string
       reverse(s.begin(),s.end());
    
        int n=s.length();
        int j = 0;
        
        for(int i = 0;i < n;++i)
        {
            if(s[i] != ' ')
            {
                //go to the begining of the word
                if(j != 0)
                    s[j++] = ' ';
                int end = i;
                while(end < n && s[end] != ' ')
                    s[j++] = s[end++];
                
                //reverse the word
                reverse(s.begin() + j - (end - i),s.begin() + j);
                
                //move to the next word
                i = end;
            }
        }
        
        s.erase(s.begin() + j,s.end());
        return s;
            
    }
};
