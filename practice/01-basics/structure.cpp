#include <iostream>
using namespace std;

//Collection of elements with same or different datatypes
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r1;           //declaration
    struct Rectangle r2 = {10, 5}; //initialization

    //Accessing members
    r1.length = 20;
    r1.breadth = 10;

    cout << "Area of Rectangle r1: " << r1.breadth * r1.breadth << endl;
    cout << "Area of Rectangle r2: " << r2.breadth * r2.breadth << endl;

    return 0;
}