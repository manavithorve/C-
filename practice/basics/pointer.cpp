#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p; // here * represent that p is a address/pointer variable which holds address of a integer variable
    p = &a; // & sign represent the address of a variable, here p is holding address of a;

    cout << "Value of a: " << a;
    cout << "\nAddress of a: " << &a;
    cout << "\nValue of p is address of a: " << p;
    cout << "\nAddress of p: " << &p;
    //This will print on which address p is stored.
    cout << "\nValue after dereferencing p: " << *p << endl;
    // This will print value which p is pointing.. Here p is pointing variable a containing value 10, This is called Dereferencing!!

    return 0;
}