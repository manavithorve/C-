/*Pronic number is when two product of two consecutive numbers is the given number!*/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,sqroot;
    cout<<"Number: ";
    cin>>n;
    sqroot = sqrt(n);
    string result = (sqroot * (sqroot+1) == n) ? "Pronic Number!!" : "Not a Pronic Number!";
    cout<<result;
    return 0;  
}