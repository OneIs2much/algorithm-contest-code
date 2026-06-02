/*
 * @lc app=leetcode.cn id=85 lang=cpp
 *
 * [85] 最大矩形
 */

// @lc code=start
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int ans = 0, m = matrix.size(), n = matrix[0].size();
        vector<vector<vector<int>>> dp(m + 1, vector<vector<int>>(n + 1, vector<int>(m + 1, 0)));
        vector<vector<int>> h(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; i ++ ) {
            for (int j = 1; j <= n; j ++ ) {
                if (matrix[i - 1][j - 1] == '0') continue;
                h[i][j] = 1 + h[i - 1][j];
                for (int k = 1; k <=h[i][j]; k ++ ) {
                    dp[i][j][k] = dp[i][j - 1][k] + k;
                    ans = max(ans, dp[i][j][k]);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

#include <bits/stdc++.h>
using namespace std;