/*
Special Permutations

1. You are given a 0-indexed integer array nums containing n distinct positive integers. A permutation of nums is called special if:

For all indexes 0 <= i < n - 1, either nums[i] % nums[i+1] == 0 or nums[i+1] % nums[i] == 0.
Return the total number of special permutations. As the answer could be large, return it modulo 109 + 7.
*/

#include <bits/stdc++.h>
using namespace std;

int good(int x, int y)
{
    return x % y == 0 || y % x == 0;
}
int specialPerm(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> dp(1 << n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        dp[1 << i][i] = 1;
    }

    const int MOD = 1e9 + 7;
    for (int mask = 1; mask < (1 << n); mask++)
    {
        for (int c = 0; c < n; c++)
            if (dp[mask][c])
            {
                for (int nxt = 0; nxt < n; nxt++)
                    if (((mask >> nxt) & 1 ^ 1) && good(nums[c], nums[nxt]))
                    {
                        dp[mask | (1 << nxt)][nxt] += dp[mask][c];
                        if (dp[mask | (1 << nxt)][nxt] >= MOD)
                            dp[mask | (1 << nxt)][nxt] -= MOD;
                    }
            }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += dp[(1 << n) - 1][i];
        ans %= MOD;
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    cout << specialPerm(nums);
    return 0;
}
