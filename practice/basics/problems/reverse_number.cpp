#include <iostream>
using namespace std;

int main()
{
    int number, reverse = 0, remainder;
    cout << "Number: ";
    cin >> number;
    while (number)
    {
        remainder = number % 10;

        if ((reverse > INT32_MAX / 10 || reverse == INT32_MAX / 10 && remainder == 7) ||
            (reverse < INT32_MIN / 10 || reverse == INT32_MIN / 10 && remainder == -8))
        {
            return 0;
        }

        number = number / 10;
        reverse = reverse * 10 + remainder;
    }
    cout << reverse << endl;
    return 0;
}