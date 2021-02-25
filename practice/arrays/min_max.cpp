#include<iostream>
using namespace std;

int findMin(int num[],int n){
    int min=num[0];
    for(int i= 1; i < n; i++)
    {
        if(num[i]<min)
            min = num[i];
    }
    return min;
}
int findMax(int num[],int n){
    int max=num[0];
    for(int i= 1; i < n; i++)
    {
        if(num[i]>max)
            max = num[i];
    }
    return max;
}
int main()
{
    int n;
    cout<<"\nEnter number of elements: ";
    cin>>n;
    int numbers[n];
    cout<<"Enter numbers: ";
    for (int i = 0; i< n; i++)
    {
        cin>>numbers[i];
    }
    cout<<"\nMinimum: "<<findMin(numbers,n);
    cout<<"\nMaximum: "<<findMax(numbers,n);
    return 0;
}