/*
 * @lc app=leetcode id=3232 lang=cpp
 *
 * [3232] Find if Digit Game Can Be Won
 */

// @lc code=start
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s=0,d=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=0 && nums[i]<=9){
                s+=nums[i];
            }
            else{
                d+=nums[i];
            }
        }
        if (s==d) return false;
        else return true;
    }
};
// @lc code=end

