/*
 * @lc app=leetcode id=922 lang=cpp
 *
 * [922] Sort Array By Parity II
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> evens;
        vector<int> odds;
        
        for (int num : nums) {
            if (num % 2 == 0) {
                evens.push_back(num);
            } else {
                odds.push_back(num);
            }
        }
        
        vector<int> result(nums.size());
        int evenIdx = 0;
        int oddIdx = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                result[i] = evens[evenIdx++];
            } else {
                result[i] = odds[oddIdx++];
            }
        }
        
        return result;
    }
};
// @lc code=end

