/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int sl = s.length();
        int tl = t.length();
        string ss="";
        string tt="";

        int skip=0;
        for(int i=sl-1;i>=0;i--)
        {
            if (s[i] == '#') {
                skip++;
            } else {
                if (skip > 0) {
                    skip--;
                } else {
                    ss.push_back(s[i]);
                }
            }

        }

        skip=0;
        for(int i=tl-1;i>=0;i--)
        {
            if (t[i] == '#') {
                skip++;
            } else {
                if (skip > 0) {
                    skip--;
                } else {
                    tt.push_back(t[i]);
                }
            }

        }
        return ss==tt;
    }
};
// @lc code=end

