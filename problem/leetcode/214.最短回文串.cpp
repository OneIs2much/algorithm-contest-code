/*
 * @lc app=leetcode.cn id=214 lang=cpp
 *
 * [214] 最短回文串
 */

// @lc code=start
class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size(), m = 0;
        if (n == 0) return "";
        vector<int> r(2 * n + 1);
        Manacher(s, r);
        for (int i = 0; i <= n; i ++ )
            if (r[i] == i) m = i;
        string pre = s.substr(m);
        reverse(pre.begin(), pre.end());
        s.insert(0, pre);
        return s;
    }

    void Manacher(string s, vector<int> &radius) {
        string s1 = "#";
        for (int i = 0; i < s.size(); i ++ ) {
            s1 += s[i];
            s1 += "#";
        }
    
        radius[0] = 0, radius[1] = 1;
        int now_index = 1, right_boundary = 2;
    
        for (int i = 2; i < s1.size(); i ++ ) {
            if (i <= right_boundary) {
                int j = 2 * now_index - i;
                int boundary = min(right_boundary, radius[j] + i);
    
                if (boundary < right_boundary) {
                    radius[i] = radius[j];
                    continue;
                }
            }
    
            radius[i] = max(0, right_boundary - i);
            int t = 1;
            while (
                i - radius[i] - t >= 0 &&
                i + radius[i] + t < s1.size() &&
                s1[i - radius[i] - t] == s1[i + radius[i] + t]
            ) t ++ ;
    
            radius[i] += t - 1;
            right_boundary = i + radius[i];
            now_index = i;
    
        }
    }
};
// @lc code=end

#include<bits/stdc++.h>
using namespace std;