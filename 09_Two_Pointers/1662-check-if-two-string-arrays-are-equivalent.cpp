/*
 * @lc app=leetcode id=1662 lang=cpp
 *
 * [1662] Check If Two String Arrays are Equivalent
 */

// @lc code=start
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i = 0;
        int j = 0;

        int x = 0;
        int y = 0;

        while (i < word1.size() && j < word2.size())
        {
            if (word1[i][x] == word2[j][y])
            {
                x++;
                y++;
            }
            else 
            {
                return false;
            }

            if (x == word1[i].size())
            {
                i++;
                x = 0;
            }
            
            if (y == word2[j].size())
            {
                j++;
                y = 0;
            }
        }
        return i == word1.size() && j == word2.size();
    }
};
// @lc code=end

