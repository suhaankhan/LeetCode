/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = 0;
        int count = 0;

        for (int num : nums) {
            if (count == 0) {
                element = num;
            }
            
            if (num == element) {
                count++;
            } 
            else {
                count--;
            }
        }     
        return element;
    }
};
// @lc code=end

