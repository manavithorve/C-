#include <stdlib.h>
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

    struct Rectangle r0;
    r0.length = 5;
    
    struct Rectangle *ptr;
    ptr = &r0; //ptr will point r0 

    // ptr.breadth --> This is invalid compiler will try to access ptr as structure variable not pointer
    //*ptr.breadth --> . has higher preference over * so invalid
    //(*ptr).breadth --> This is valid but complex syntax.

    ptr->breadth = 5;
    //pointing to a structure variable

    struct Rectangle *r1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    //Allocating memory dynamically in HEAP in C

    struct Rectangle *r2 = new Rectangle;
    //Allocating memory dynamically in HEAP in C++

    //Accessing members
    r1->length = 20;
    r1->breadth = 10;

    r2->length = 15;
    r2->breadth = 2;

    cout << "Area of Rectangle r0: " << ptr->length * ptr->breadth << endl;
    cout << "Area of Rectangle r1: " << r1->length * r1->breadth << endl;
    cout << "Area of Rectangle r2: " << r2->length * r2->breadth << endl;

    return 0;
}