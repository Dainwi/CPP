#include <iostream>
#include <vector>
using namespace std;

// A function to find the least prime factor of each number from 1 to n
vector<int> leastPrimeFactor(int n)
{
    // A vector to store the results
    vector<int> res(n + 1);

    // The least prime factor of 1 is 1
    res[1] = 1;

    // Loop through the even numbers from 2 to n
    for (int i = 2; i <= n; i += 2)
    {
        // The least prime factor of an even number is 2
        res[i] = 2;
    }

    // Loop through the odd numbers from 3 to n
    for (int i = 3; i <= n; i += 2)
    {
        // If the number is not marked yet
        if (res[i] == 0)
        {
            // The least prime factor of a prime number is itself
            res[i] = i;

            // Loop through the multiples of i from i * i to n
            for (int j = i * i; j <= n; j += i)
            {
                // If the multiple is not marked yet
                if (res[j] == 0)
                {
                    // The least prime factor of the multiple is i
                    res[j] = i;
                }
            }
        }
    }

    // Return the result vector
    return res;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> res = leastPrimeFactor(10);
    for (int i = 0; i < n; i++)
    {
        cout << res[arr[i]] << " ";
    }
    return 0;
}