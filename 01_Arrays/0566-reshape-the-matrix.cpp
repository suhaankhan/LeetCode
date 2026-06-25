/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> flat;
        
        if (m * n != r * c) {
            return mat;
        }
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                flat.push_back(mat[i][j]);
            }
        }

        vector<vector<int>> result(r, vector<int>(c));
        int k = 0;
        
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                result[i][j] = flat[k++];
            }
        }
        
        return result;
    }
};
// @lc code=end

