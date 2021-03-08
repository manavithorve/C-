#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

//call by address
void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

//call by value
int calculateArea(struct Rectangle r)
{
    return (r.length * r.breadth);
}

// Call by reference
void changeLengthBreadth(struct Rectangle &r, int l, int b)
{
    r.length = l;
    r.breadth = b;
}

int main()
{
    struct Rectangle rectangle;
    initialize(&rectangle, 10, 5);
    cout << "Rectangle Length: " << rectangle.length << " | Rectangle Breadth: " << rectangle.breadth << endl;

    int rectangleArea = calculateArea(rectangle);
    cout << "Area of Rectangle: " << rectangleArea << endl;

    changeLengthBreadth(rectangle, 20, 10);
    cout << "After changing Length and Breadth.." << endl;
    cout << "Rectangle Length: " << rectangle.length << " | Rectangle Breadth: " << rectangle.breadth << endl;

    return 0;
}