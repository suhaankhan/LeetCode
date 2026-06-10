/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int current = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                current++;

                if (current > max) {
                    max = current;
                }
            }
            else {
                current = 0;
            }
        }
        return max;
    }
};
// @lc code=end

