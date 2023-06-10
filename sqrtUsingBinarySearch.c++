#include <bits/stdc++.h>
using namespace std;

long long int mySqrt(int num)
{
    long long int s = 0, e = num, mid, ans = -1;

    while (s <= e)
    {
        mid = s + (e - s) / 2;

        if ((mid * mid) == num)
        {
            return mid;
        }
        else if ((mid * mid) > num)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int num = 40;
    cout << mySqrt(num);

    return 0;
}