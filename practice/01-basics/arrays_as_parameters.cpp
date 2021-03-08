#include <iostream>
using namespace std;

//Arrays cannot be passed by value.. They can only be passed by address!
// a[] signifies that a[] is an array pointer. *a can also be used to point an array but it can point any variable of respective data type but a[] is specific to array only!

void add10(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] += 10;
    }
}

//Changes are reflected in original array!

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "\nOriginal Array: " << endl;
    printArray(arr, 5);
    add10(arr, 5);
    cout << "Array after Adding 10 to each element: " << endl;
    printArray(arr, 5);
    return 0;
}