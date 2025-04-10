/*
 * @lc app=leetcode id=1108 lang=cpp
 *
 * [1108] Defanging an IP Address
 */

// @lc code=start
class Solution {
public:
    string defangIPaddr(string address) {
        string r="";
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                r+="[.]";
            }
            else{
                r+=address[i];
            }
        }
        return r;
    }
};
// @lc code=end

