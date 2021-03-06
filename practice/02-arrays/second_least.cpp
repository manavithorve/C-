#include <iostream>
using namespace std;

int findSecondSmallest(int a[], int n)
{
    int smallest = a[0];
    int second_min = a[1];
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == smallest)
        {
            continue;
        }
        if (a[i] < smallest)
        {
            second_min = smallest;
            smallest = a[i];
            flag = true;
        }
    }
    if (!flag)
    {
        return (smallest > second_min) ? smallest : second_min;
    }
    return second_min;
}

int main()
{

    int n, second_smallest;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    second_smallest = findSecondSmallest(arr, n);
    cout << "Second Smallest: " << second_smallest << endl;
    return 0;
}