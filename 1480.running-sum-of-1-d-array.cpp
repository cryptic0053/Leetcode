/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        res[0]=nums[0];
        for(int i=0;i<n;i++)
        {
            res[i]=res[i-1]=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<res[i]<<",";
        }
        
    }
};
// @lc code=end

