/*
Painting the Walls
You are given two 0-indexed integer arrays, cost and time, of size n representing the costs and the time taken to paint n different walls respectively. There are two painters available:

1. A paid painter that paints the ith wall in time[i] units of time and takes cost[i] units of money.
2. A free painter that paints any wall in 1 unit of time at a cost of 0. But the free painter can only be used if the paid painter is already occupied.
Return the minimum amount of money required to paint the n walls.
*/

#include <bits/stdc++.h>
using namespace std;

int paintWalls(vector<int> &cost, vector<int> &time)
{
    int n = cost.size();
    const int INF = 1e9 + 10;
    const int base = n;
    vector<int> dp(2 * n + 1, INF);
    dp[base] = 0;
    for (int i = 0; i < n; i++)
    {
        int x = cost[i], y = time[i];
        vector<int> ndp(2 * n + 1, INF);
        for (int j = -n; j <= n; j++)
        {
            if (j > -n)
                ndp[base + j - 1] = min(ndp[base + j - 1], dp[base + j]);
            ndp[base + min(n, j + y)] = min(ndp[base + min(n, j + y)], x + dp[base + j]);
        }
        swap(ndp, dp);
    }
    int ans = INT_MAX;
    for (int i = 0; i <= n; i++)
        ans = min(ans, dp[i + base]);
    return ans;
}

int main()
{
    vector<int> cost = {1, 2, 3, 4, 5};
    vector<int> time = {1, 2, 3, 4, 5};
    cout << paintWalls(cost, time);
    return 0;
}