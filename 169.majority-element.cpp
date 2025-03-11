/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            unordered_map<int, int> freq;
            int n = nums.size();
    
            for(int num : nums) {
                freq[num]++;
                if(freq[num] > n / 2) {
                    return num;
                }
            }
            
            return -1; 
        }
    };
// @lc code=end

