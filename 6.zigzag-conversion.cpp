/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows)
            return s;
        int patternLength = 2 * numRows - 2;
        vector<string> rows(numRows);
        vector<int> pattern;
        for (int i = 0; i < numRows; ++i)
            pattern.push_back(i); 
        for (int i = numRows - 2; i > 0; --i)
            pattern.push_back(i); 
        for (int i = 0; i < s.length(); ++i) {
            int row = pattern[i % pattern.size()];
            rows[row] += s[i];
        }
        string result = "";
        for (string r : rows)
            result += r;

        return result;
    }
};
// @lc code=end

