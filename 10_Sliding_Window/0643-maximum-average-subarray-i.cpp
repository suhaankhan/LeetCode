/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        
        double current_sum = 0;
        for (int i = 0; i < k; i++) {
            current_sum += nums[i];
        }

        double max_sum = current_sum;

        for (int i = k; i < n; i++) {
            current_sum += nums[i] - nums[i - k];

            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
    return max_sum / k;
    }
};
// @lc code=end

