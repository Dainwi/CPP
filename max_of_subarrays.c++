#include <vector>
#include <deque>
using namespace std;

// A function to find the maximum element of each subarray of size k
vector<int> max_of_subarrays(int *arr, int n, int k)
{
    // A vector to store the results
    vector<int> res;

    // A deque to store the indices of the maximum elements of the current window
    deque<int> dq;

    // Loop through the first k elements of the array
    for (int i = 0; i < k; i++)
    {
        // Remove the indices of the elements that are smaller than or equal to the current element from the back of the deque
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();

        // Add the index of the current element to the back of the deque
        dq.push_back(i);
    }

    // Loop through the remaining elements of the array
    for (int i = k; i < n; i++)
    {
        // Add the front element of the deque (the maximum element of the previous window) to the result vector
        res.push_back(arr[dq.front()]);

        // Remove the indices of the elements that are out of the current window from the front of the deque
        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // Remove the indices of the elements that are smaller than or equal to the current element from the back of the deque
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();

        // Add the index of the current element to the back of the deque
        dq.push_back(i);
    }

    // Add the front element of the deque (the maximum element of the last window) to the result vector
    res.push_back(arr[dq.front()]);

    // Return the result vector
    return res;
}
