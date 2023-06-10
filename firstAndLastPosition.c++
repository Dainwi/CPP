#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> &arr, int n, int k)
{
    int s = 0, e = n - 1, firstPos = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        if (arr[mid] == k)
        {
            firstPos = mid;
            e = mid - 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return firstPos;
}

int lastOcc(vector<int> &arr, int n, int k)
{
    int s = 0, e = n - 1, lastPos = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        if (arr[mid] == k)
        {
            lastPos = mid;
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return lastPos;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> count(firstOcc(arr, n, k), lastOcc(arr, n, k));
    return count;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 4, 4, 4, 4};
    pair<int, int> ans = firstAndLastPosition(arr, arr.size(), 4);

    cout << "[ " << ans.first << " " << ans.second << " ]";

    return 0;
}