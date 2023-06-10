#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s)
{
    // Mapping of Roman numerals to their integer values
    unordered_map<char, int> romanMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    int result = 0;    // Stores the final decimal value
    int prevValue = 0; // Stores the value of the previous Roman numeral

    // Iterate through the input string from right to left
    for (int i = s.length() - 1; i >= 0; i--)
    {
        int currentValue = romanMap[s[i]]; // Get the integer value of the current numeral

        // If the current numeral is smaller than the previous one, subtract its value
        if (currentValue < prevValue)
        {
            result -= currentValue;
        }
        else
        {
            // Otherwise, add its value to the result
            result += currentValue;
        }

        prevValue = currentValue; // Update the previous value for the next iteration
    }

    return result; // Return the computed decimal number
}

int main()
{
    string romanNumeral;
    cout << "Enter a Roman numeral: ";
    cin >> romanNumeral;

    int decimalNumber = romanToInt(romanNumeral);
    cout << "Decimal equivalent: " << decimalNumber << endl;

    return 0;
}
