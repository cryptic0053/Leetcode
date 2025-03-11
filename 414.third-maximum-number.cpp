/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution {
    public:
        int thirdMax(vector<int>& nums) {
            int n = nums.size();
            sort(nums.begin(),nums.end(),greater<int>()); // Sort in descending order
            
            int distcount = 1; 
            
            for(int i=1;i<n;i++){
                if(nums[i] != nums[i-1]) {
                    distcount++;
                }
                if(distcount == 3) return nums[i]; 
            }
            
            
            return nums[0];
        }
    };
// @lc code=end

