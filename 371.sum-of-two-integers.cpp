/*
 * @lc app=leetcode id=371 lang=cpp
 *
 * [371] Sum of Two Integers
 */

// @lc code=start
class Solution {
public:
    int getSum(int a, int b) {
        if(b>0)
        {
        for(int i=0;i<b;i++)
        {
            a++;
        }
        return a;
        }
        else if(b<0)
        {
        for(int i=b;i<0;i++)
        {
            a--;
        }
        return a;
        }
        
        return a;
    }
};
// @lc code=end

