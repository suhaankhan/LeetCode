/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            if (nums[i] % 2 != 0 && nums[j] % 2 == 0) {
                swap (nums[i], nums[j]);
                i++;
                j--;
            }
            if (i < j && nums[i] % 2 == 0) {
                i++;
            }
            if (i < j && nums[j] % 2 != 0) {
                j--;
            }
        }
        return nums;
    }
};
// @lc code=end

