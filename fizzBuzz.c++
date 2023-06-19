// Fizz Buzz
/*
Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
*/

#include <bits/stdc++.h>
using namespace std;

vector<string> fizzBuzz(int n)
{
    vector<string> ans;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            ans.push_back("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            ans.push_back("Fizz");
        }
        else if (i % 5 == 0)
        {
            ans.push_back("Buzz");
        }
        else
        {
            ans.push_back(to_string(i));
        }
    }
    return ans;
}

int main()
{
    int n = 15;
    std::vector<std::string> result = fizzBuzz(n);

    for (const auto &str : result)
    {
        std::cout << "[ " << str << " ]";
    }

    return 0;
}