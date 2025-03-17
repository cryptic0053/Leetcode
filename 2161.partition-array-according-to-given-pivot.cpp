/*
 * @lc app=leetcode id=2161 lang=cpp
 *
 * [2161] Partition Array According to Given Pivot
 */

// @lc code=start
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        int first=0;
        int last=n-1;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                res[first]=nums[i];
                first++;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]>pivot){
                res[last]=nums[i];
                last--;
            }
        }
        for(int i=first;i<=last;i++){
            res[first]=pivot;
            first++;
        }
        return res;
    }
};
// @lc code=end

