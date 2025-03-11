/*
 * @lc app=leetcode id=3190 lang=cpp
 *
 * [3190] Find Minimum Operations to Make All Elements Divisible by Three
 */

// @lc code=start
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]%3!=0)
                count++;
        }
        return count;
    }
};
// @lc code=end

