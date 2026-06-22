/*
 * @lc app=leetcode id=925 lang=cpp
 *
 * [925] Long Pressed Name
 */

// @lc code=start
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0;
        int j = 0;

        while (j < typed.size()) 
        {
            if (i < name.size() && name[i] == typed[j]) 
            {
                i++;
                j++;
            }
            else if (j > 0 && typed[j] == typed[j - 1]) {
                j++;
            }
            else {
                return false;
            }
        }
        return i == name.size();
    }
};
// @lc code=end

