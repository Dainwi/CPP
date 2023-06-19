#include <iostream>
#include <string>
using namespace std;

void isRecomende(int x, int y)
{
    if (y >= x && y <= x + 200)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}

int main()
{
    int x, y;
    cin >> x >> y;
    isRecomende(x, y);

    return 0;
}