#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int n, int k)
{
    int s = 0, e = n - 1, mid;

    while (s <= e)
    {
        mid = s + (e - s) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    cout << binarySearch(arr, arr.size(), 6);

    return 0;
}