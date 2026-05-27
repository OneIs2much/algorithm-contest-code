/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start

class Solution {
    public:
    string longestPalindrome(string s) {
        if (s.size() == 1) return s;
        string s1 = "a";
        for (int i = 0; i < s.size(); i ++ ) {
            s1 += s[i];
            s1 += "a";
        }

        vector<int> radius(s1.size());
        radius[0] = 0, radius[1] = 1;
        int now_index = 1, right_boundary = 2, max_radius = 1, max_index = 1;

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

            if (max_radius < radius[i]) max_radius = radius[i], max_index = i;
        }
        return s.substr(max_index / 2 - max_radius / 2, max_radius);
    }

};
// @lc code=end


#include<bits/stdc++.h>
using namespace std;