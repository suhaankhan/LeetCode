/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        
        int original = x;
        long reversed_num = 0; 
        
        while (x > 0) {
            int last_digit = x % 10;
            reversed_num = (reversed_num * 10) + last_digit;
            x = x / 10; 
        }

        return original == reversed_num;
    }
};
// @lc code=end

