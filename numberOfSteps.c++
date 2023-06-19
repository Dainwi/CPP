// Number of steps
/*
Given an integer num, return the number of steps to reduce it to zero.

In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
*/

#include <iostream>
using namespace std;

int numberOfSteps(int num)
{
    int steps = 0;

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num -= 1;
        }
        steps++;
    }

    return steps;
}

int main()
{
    int n;
    cin >> n;

    cout << numberOfSteps(n);

    return 0;
}