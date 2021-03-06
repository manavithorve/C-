#include <iostream>
using namespace std;

//Parameters can be 0-n;
//Call by value | Function with parameter and return type.
int add(int x, int y)
{
    return x + y;
}

//Call by address | Function with parameter without return type
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//Call by reference | valid in c++
void swapNumbers(int &x, int &y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}

//Simple call | Function without parameters and return type
void Greetings()
{
    cout << "Thank You!!" << endl;
}

int main()
{
    int a = 10, b = 20;
    cout << "a = " << a << " | b = " << b << endl;
    int z = add(a, b);
    cout << "Addition of a and b: " << z << endl;
    swap(&a, &b);
    cout << "After swapping: a = " << a << " | b = " << b << endl;
    swapNumbers(a, b);
    cout << "Swapping again: a = " << a << " | b = " << b << endl;
    Greetings();
    return 0;
}