/*
 * @lc app=leetcode id=709 lang=cpp
 *
 * [709] To Lower Case
 */

// @lc code=start
class Solution {
public:
    string toLowerCase(string s) {
        int l = s.length()-1;
        for(int i=0;i<=l;i++)
        {
            s[i]=tolower(s[i]);
        }
        return s;
    }
};
// @lc code=end

