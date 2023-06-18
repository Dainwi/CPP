/**Bob has a playlist ofsongs, each song has a singer associated with it(denoted by an integer) Favourite singer of Bob is the one whose songs are the most on the playlist Count the number of Favourite Singers of Bob**/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[151875];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                temp++;
                if (temp > max)
                {
                    max = temp;
                    count = 1;
                    continue;
                }
            }
        }

        return 0;
    }
}
