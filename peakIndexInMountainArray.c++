#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {18, 29, 38, 59, 98, 100, 99, 98, 90};
    // vector<int> arr = {3, 4, 5, 1};

    cout << peakIndexInMountainArray(arr);

    return 0;
}