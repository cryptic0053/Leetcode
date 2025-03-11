/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        int count = 0;
        for(int i=0;i<len;i++){
            if(flowerbed[i]==0)
            {
                bool leftempty = (i==0 || flowerbed[i-1]==0);
                bool rightempty = (i==len-1 || flowerbed[i+1]==0);
                if(leftempty && rightempty)
                {
                    flowerbed[i] = 1;
                    count++;
                    i++;
                }
            }
            if(count>=n) return true;
            
        }
        return count>=n;
    }
};
// @lc code=end

