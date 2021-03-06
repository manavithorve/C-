/*Complexity is still n as no of iterations are n/2 so after ignoring constant 1/2 complexity is n*/

#include <iostream>
using namespace std;

int sumOfArrayElements(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n / 2; i++)
    {
        sum = sum + arr[i] + arr[n - i - 1];
    }
    if (n % 2 != 0)
    {
        sum = sum + arr[n / 2];
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = sumOfArrayElements(arr, n);
    cout << "\nSum of elements: " << sum << endl;
    return 0;
}