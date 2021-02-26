#include <iostream>
using namespace std;

int findSecondLargest(int a[], int n)
{
    int largest = a[0];
    int second_largest = a[1];
    bool flag = false;
    for (int i = 2; i < n; i++)
    {
        if (a[i] == largest)
        {
            continue;
        }
        if (a[i] > largest)
        {
            second_largest = largest;
            largest = a[i];
            flag = true;
        }
    }
    if (!flag)
    {
        return (largest < second_largest) ? largest : second_largest;
    }
    return second_largest;
}

int main()
{

    int n, second_largest;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    second_largest = findSecondLargest(arr, n);
    cout << "Second Largest: " << second_largest << endl;
    return 0;
}