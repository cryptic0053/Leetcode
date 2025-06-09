/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = 0;
        for(int b=0;b<nums.size();b++)
        {
            if(nums[b]!=0)
            {
                swap(nums[b],nums[a]);
                a++;
            }
        }
        
    }
};
// @lc code=end

