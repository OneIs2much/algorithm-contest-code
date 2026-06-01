/*
 * @lc app=leetcode.cn id=32 lang=cpp
 *
 * [32] 最长有效括号
 */

// @lc code=start
class Solution {
public:
    int longestValidParentheses(string s) {
        vector<int> le, dp(s.size(), 0);
        int ans = 0;

        for (int i = 0; i < s.size(); i ++ ) {
            if (s[i] == '(') {
                le.push_back(i);
            }
            else if (!le.empty()) {
                dp[i] = i - le.back() + 1;
                ans = max(ans, dp[i]);
                if (le.back() - 1 >= 0 && s[le.back() - 1] == ')') {
                    dp[i] += dp[le.back() - 1];
                    ans = max(ans, dp[i]);
                }
                le.pop_back();
            }
        }
        return ans;
    }
};
// @lc code=end

#include <bits/stdc++.h>
using namespace std;