/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])
            {
                count++;
            }
        }
        if(count) return false;
        else return true;
    }
};
// @lc code=end

