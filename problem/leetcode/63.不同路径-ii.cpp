/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();

        if (m == 1 || n == 1) {
            for (int i = 0; i < m; i ++ ) 
                for (int j = 0; j < n; j ++ ) 
                    if (obstacleGrid[i][j] == 1)
                        return 0;
            return 1;
        }

        if (obstacleGrid[0][0] == 1) return 0;

        int t = 1;
        for (int i = 1; i < m; i ++ ) 
            if (obstacleGrid[i][0] == 0) obstacleGrid[i][0] = t;
            else obstacleGrid[i][0] = t = 0;
        t = 1;
        for (int i = 1; i < n; i ++ ) 
            if (obstacleGrid[0][i] == 0) obstacleGrid[0][i] = t;
            else obstacleGrid[0][i] = t = 0;
            
        for (int i = 1; i < m; i ++ ) {
            for (int j = 1; j < n; j ++ ) {
                if (obstacleGrid[i][j] == 1) {
                    obstacleGrid[i][j] = 0;
                    continue;
                }
                obstacleGrid[i][j] = obstacleGrid[i - 1][j] + obstacleGrid[i][j - 1];
            }
        }
        
        return obstacleGrid[m - 1][n - 1];
    }
};
// @lc code=end

#include <bits/stdc++.h>
using namespace std;