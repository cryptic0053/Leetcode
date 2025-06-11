/*
 * @lc app=leetcode id=260 lang=cpp
 *
 * [260] Single Number III
 */

// @lc code=start
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor_all = 0;
        for (int num : nums) xor_all ^= num;

        
        unsigned int rightmost_set_bit = xor_all & -static_cast<unsigned int>(xor_all);

        int num1 = 0, num2 = 0;
        for (int num : nums) {
            if (num & rightmost_set_bit)
                num1 ^= num;
            else
                num2 ^= num;
        }

        return {num1, num2};
    }
};



// @lc code=end

