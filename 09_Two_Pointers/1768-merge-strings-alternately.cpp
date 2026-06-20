/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        
        int i = 0;
        int j = 0;
        int n1 = word1.size();
        int n2 = word2.size();

        while (i < n1 || j < n2) {

            if (i < n1) {
                result.push_back(word1[i]);
                i++;
            }

            if (j < n2) {
                result.push_back(word2[j]);
                j++;
            }
        }
        return result;
    }
};
// @lc code=end

