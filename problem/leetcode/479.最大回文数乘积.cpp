/*
 * @lc app=leetcode.cn id=479 lang=cpp
 *
 * [479] 最大回文数乘积
 */

// @lc code=start
class Solution {
public:
    int largestPalindrome(int n) {
        int ans[] = {0, 9, 987, 123, 597, 677, 1218, 877, 475};
        return ans[n];
    }
    // 打表
    // def ispalindrome(n):
    //     s = str(n)
    //     return s == s[::-1]

    // tens = [10 ** i for i in range(9)]
    // ans = [0] * 9

    // for i in range(1, 9):
    //     for j in range(tens[i] - 1, tens[i - 1], -1):
    //         for k in range(j, tens[i - 1], -1):
    //             if ans[i] >= j * k:
    //                 break
    //             if ispalindrome(j * k):
    //                 ans[i] = max(ans[i], j * k)
    //                 break
    //     print(ans[i] % 1337)
};
// @lc code=end

#include<bits/stdc++.h>
using namespace std;