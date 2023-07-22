#include <iostream>

using namespace std;

void mergeSortedArray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;

    // Merge elements from arr1 and arr2 into arr3 in sorted order
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++]; // Take the smaller element from arr1
        }
        else
        {
            arr3[k++] = arr2[j++]; // Take the smaller element from arr2
        }
    }

    // If there are any remaining elements in arr1, add them to arr3
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    // If there are any remaining elements in arr2, add them to arr3
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[8] = {0};

    mergeSortedArray(arr1, 5, arr2, 3, arr3);

    display(arr3, 8);

    return 0;
}