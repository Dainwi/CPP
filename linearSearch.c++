#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 4, 5, 1, 6};

    cout << linearSearch(arr, 6, 5);
    return 0;
}
