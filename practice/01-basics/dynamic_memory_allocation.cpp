#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    int *p = (int *)malloc(sizeof(int)); //C
    int *q = new int;                    //C++
    *p = 10;
    *q = 5;
    cout << "Value at p: " << *p << endl;
    cout << "Address of p" << p << endl; //this will vary each time program runs.
    cout << "Value at q: " << *q << endl;
    cout << "Address of q" << q << endl; //this will vary each time program runs.
}

//Static memory allocation and Deallocation is done by Compiler itself
//Dyanmic memory allocation is done at run time.
