/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int n = nums.size();
            for (int i = 0; i < n; i++) {
                if (nums[i] == target) {
                    return i; 
                } 
                else if (i + 1 < n && nums[i] < target && nums[i + 1] > target) {
                    return i + 1;  
                } 
            }
    
            if (target < nums[0]) {
                return 0;
            }
    
            if (target > nums[n-1]) {
                return n;
            }
            return n;
        }
    };
    
// @lc code=end

