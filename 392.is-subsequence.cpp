/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sl=s.length();
        int tl=t.length();
        int i=0,j=0;
        while(i<sl && j<tl)
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else j++;
        }
        return i==sl;
    }
};
// @lc code=end

