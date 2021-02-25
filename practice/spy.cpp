/*Spy Number is when sum and product of it's digit is same*/
#include<iostream>
using namespace std;

int main(){
    int n, rem, sum=0, prod = 1;

    cout<<"Number: ";
    cin>>n;
    
    while(n!=0)
    {
        rem = n % 10;     //remainder
        if (rem == 0)
        {
            continue;
        }
        n = n / 10;
        sum += rem;
        prod *= rem;
    }
    string result = (prod == sum) ? "Spy number!" : "Not a spy number";
    cout<<result;
}
