#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;
    // & sign while declaration represent that r is a reference variable i.e nickname or alias for variable a which means two names will be given for same memory locations.
    // This is only applicable in C++ not in C.
    //It is useful while passing parameters to functions with small code.

    cout << "a: " << a << endl;
    cout << "r: " << r << endl;
    r++;
    cout << "After modifying only r" << endl;
    //After modifying r a is automatically modified as both are names of same memory locations.
    cout << "a: " << a << endl;
    cout << "r: " << r << endl;
    return 0;
}