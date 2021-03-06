#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count = 0;
        }
        else
        {
            count++;
            maxCount = (maxCount < count) ? count : maxCount;
        }
    }
    cout << "Max consecutive 1s are: " << maxCount << endl;
    return 0;
}