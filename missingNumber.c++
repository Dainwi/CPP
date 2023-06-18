#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &array, int n)
{
    // A variable to store the missing number
    int ans;

    // Sort the array in ascending order
    sort(array.begin(), array.end());

    // Loop through the numbers from 1 to n
    for (int i = 0; i < n; i++)
    {
        // The expected element at the current position
        int element = i + 1;

        // If the current position is within the array and the element does not match the expected element
        if (i < array.size() && array[i] != element)
        {
            // The missing number is the expected element
            ans = element;
            // Break the loop
            break;
        }
        // If the current position is beyond the array
        else if (i + 1 > array.size())
        {
            // The missing number is the expected element
            ans = element;
            // Break the loop
            break;
        }
    }

    // Return the missing number
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> array(arr, arr + n);
    int ans = missingNumber(array, n);
    cout << ans;
    return 0;
}
