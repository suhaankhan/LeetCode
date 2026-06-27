/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        int left = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            if (right - left > k) {
                window.erase(nums[left]);
                left++;
            }
            
            if (window.count(nums[right])) {
                return true;
            }
            
            window.insert(nums[right]);
        }
        
        return false;
    }
};
// @lc code=end

