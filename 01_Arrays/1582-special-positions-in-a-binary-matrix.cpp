/*
 * @lc app=leetcode id=1582 lang=cpp
 *
 * [1582] Special Positions in a Binary Matrix
 */

// @lc code=start
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int special = 0;
        int m = mat.size();
        int n = mat[0].size();
        

        vector<int> row(m);
        vector<int> column(n);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) {
                    row[i]++;
                    column[j]++;
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1 && row[i] == 1 && column[j] == 1) {
                    special++;
                }
            }
        }

        return special;

    }
};
// @lc code=end

