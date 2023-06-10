#include <bits/stdc++.h>
using namespace std;

/*
It first calculates the total sum of all elements in the array.
It then iterates through each element in the array and checks whether the sum of all elements to its left is equal to the sum of all elements to its right.
If it finds an element that satisfies this condition, it returns its index as the pivot index.
If no such element exists, it returns -1.
*/

int pivotIndex(vector<int> &arr)
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
    return s;
}

int main()
{
    vector<int> arr = {3, 8, 10, 17, 1};
    // vector<int> arr = {1, 7, 3, 6, 5, 6};

    cout << pivotIndex(arr);

    return 0;
}
