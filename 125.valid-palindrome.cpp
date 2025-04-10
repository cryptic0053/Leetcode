/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                res+=tolower(s[i]);
            }
        }
        int l=0;
        int r=res.length()-1;
        int count=0;
        while(l<r)
        {
            if(res[l]!=res[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;

    }
};
// @lc code=end

