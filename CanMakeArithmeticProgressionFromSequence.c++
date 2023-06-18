#include <iostream>
#include <algorithm>
using namespace std;

// A function to check if an array of n elements can form an arithmetic progression
bool canMakeArithmeticProgression(int n, int arr[])
{
    // If the array has less than two elements, it is trivially an arithmetic progression
    if (n < 2)
        return true;

    // Sort the array in ascending order
    sort(arr, arr + n);

    // Find the common difference between consecutive elements
    int diff = arr[1] - arr[0];

    // Check if all the elements have the same difference
    for (int i = 2; i < n; i++)
    {
        if (arr[i] - arr[i - 1] != diff)
            return false;
    }

    // If no element violates the condition, the array is an arithmetic progression
    return true;
}

// A function to test some examples
void test()
{
    int arr1[] = {3, 5, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Can {3, 5, 1} make an arithmetic progression? " << (canMakeArithmeticProgression(n1, arr1) ? "Yes" : "No") << endl;

    int arr2[] = {9, 7, 5, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Can {9, 7, 5, 3} make an arithmetic progression? " << (canMakeArithmeticProgression(n2, arr2) ? "Yes" : "No") << endl;

    int arr3[] = {2, 4, 6, 8, 10};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Can {2, 4, 6, 8, 10} make an arithmetic progression? " << (canMakeArithmeticProgression(n3, arr3) ? "Yes" : "No") << endl;
}

// The main function
int main()
{
    test();
    return 0;
}
