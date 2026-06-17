/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        std::vector<string> result;

        for (int i = 0; i < nums.size(); i++) 
        {
            int start = nums[i];

            while ((i + 1) < nums.size() && nums[i] + 1 == nums[i + 1])
            {
                i++;
            }

            if (start != nums[i])
            {
                result.push_back(to_string(start) + "->" + to_string(nums[i]));
            }
            else 
            {
                result.push_back(to_string(start));
            }
        }
        return result;
    }
};
// @lc code=end

