#include <iostream>
#include <vector>
using namespace std;

int numberOfOcc(vector<int> &arr, int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> arr = {
        1,
        2,
        3,
        4,
        5,
        6,
        6,
    };

    cout << numberOfOcc(arr, arr.size(), 6);

    return 0;
}