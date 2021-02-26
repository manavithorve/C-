#include <iostream>
using namespace std;

int main()
{
    int n, num, sum;

    cout << "Enter the sum of numbers you want?";
    cin >> n;
    sum = n * (n + 1) / 2;

    cout << "Enter numbers:";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> num;
        sum = sum - num;
    }
    cout << "Missing number is: " << sum << endl;

    return 0;
}