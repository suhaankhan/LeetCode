/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        vector<int> customer_wealth(m);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                customer_wealth[i] += accounts[i][j];
            }
        }

        int wealth = 0;
        for (int i = 0; i < m; i++) {
            if (wealth < customer_wealth[i]) {
                wealth = customer_wealth[i];
            }
        }
        return wealth;
    }
};
// @lc code=end

