#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> &arr, int n)
{
    int s = 0, e = arr.size() - 1, mid;

    while (s < e)
    {
        mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return e;
}

int binarySearch(vector<int> arr, int start, int end, int k)
{
    int s = start, e = end, mid;

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

int searchElement(vector<int> &arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n])
    {
        return binarySearch(arr, pivot, n, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    vector<int> arr = {2, 4, 8, 1};

    cout << searchElement(arr, arr.size() - 1, 1);

    return 0;
}