/*
Find the Value of the Partition

You are given a positive integer array nums.

Partition nums into two arrays, nums1 and nums2, such that:

1. Each element of the array nums belongs to either the array nums1 or the array nums2.
2. Both arrays are non-empty.
3. The value of the partition is minimized.
4. The value of the partition is |max(nums1) - min(nums2)|.

Here, max(nums1) denotes the maximum element of the array nums1, and min(nums2) denotes the minimum element of the array nums2.

Return the integer denoting the value of such partition.
*/
#include <bits/stdc++.h>
using namespace std;

int findValueOfPartition(vector<int> &nums)
{
    int ans = INT_MAX;
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++)
        ans = min(ans, nums[i] - nums[i - 1]);
    return ans;
}

int main()
{
    vector<int> nums = {1, 4, 7, 9, 10};
    cout << findValueOfPartition(nums);
    return 0;
}
