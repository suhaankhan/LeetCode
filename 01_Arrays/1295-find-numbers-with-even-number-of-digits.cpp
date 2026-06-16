/*
 * @lc app=leetcode id=1295 lang=cpp
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
class Solution {
public:
    int countDigits(int nums)
    {
        int count = 0;
        while (nums > 0) 
        {
            nums /= 10;
            count++;
        }
        return count;
    }
    
    int findNumbers(vector<int>& nums) {
        int evenDigits = 0;
        
        for (int i = 0; i < nums.size(); i++) 
        {
            int counter = countDigits(nums[i]);
            if (counter % 2 == 0) 
            {
                evenDigits++;
            }
        }
        return evenDigits;
    }
};
// @lc code=end

