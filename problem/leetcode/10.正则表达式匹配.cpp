/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size(), n = p.size();
        vector<vector<int>> f(m + 1, vector<int>(n + 1));
        f[0][0] = true;

        auto cmp = [](char a, char b) -> bool {
            if (b == '.') return true;
            else return a == b;
        };

        for (int i = 0; i <= m; i ++ ) {
            for (int j = 1; j <= n; j ++ ) {
                if (p[j - 1] == '*') {
                    f[i][j] |= f[i][j - 2];
                    if (i != 0 && cmp(s[i - 1], p[j - 2])) {
                        f[i][j] |= f[i - 1][j];
                    }
                }
                else {
                    if (i != 0 && cmp(s[i - 1], p[j - 1])) {
                        f[i][j] |= f[i - 1][j - 1];
                    }
                }
            }
        }
        return f[m][n];
    }
};
// @lc code=end

#include <bits/stdc++.h>
using namespace std;