/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        for (int i = 1; i < nums.size(); i ++ ) {
            nums[i] = max(nums[i], nums[i] + nums[i - 1]);
        }
        return *max_element(nums.begin(), nums.end());
    }
};
// @lc code=end

#include <bits/stdc++.h>
using namespace std;