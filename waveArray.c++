#include <iostream>
using namespace std;

void display(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void waveArray(int n, int arr[])
{
    for (int i = 0; i < n - 1; i = i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    waveArray(5, arr);
    display(5, arr);

    return 0;
}