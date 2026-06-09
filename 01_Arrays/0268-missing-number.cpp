/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] != i) {
                return i;
            }
        }

        return n;
    }
};
// @lc code=end

