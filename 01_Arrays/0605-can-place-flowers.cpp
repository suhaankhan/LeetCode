/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int planted = 0;
        
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {
                
                bool left_is_clear = false;
                if (i == 0 || flowerbed[i - 1] == 0) {
                    left_is_clear = true;
                }
                
                bool right_is_clear = false;
                if (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0) {
                    right_is_clear = true;
                }
                
                if (left_is_clear && right_is_clear) {
                    flowerbed[i] = 1;
                    planted++;
                }
            }
        }
        return planted >= n;
    }
};
// @lc code=end

