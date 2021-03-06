// C++ program to determine whether the number is 
// Armstrong number or not 

/*Armstrong number is when sum is equal to the number itself*/
#include<bits/stdc++.h> 
using namespace std; 

/* Function to calculate x raised to the power y */
int power(int x, unsigned int y) 
{ 
	if( y == 0) 
		return 1; 
	if (y%2 == 0) 
		return power(x, y/2)*power(x, y/2); 
	return x*power(x, y/2)*power(x, y/2); 
} 

/* Function to calculate order of the number */
int order(int x) 
{ 
	int n = 0; 
	while (x) 
	{ 
		n++; 
		x = x/10; 
	} 
	return n; 
} 

// Function to check whether the given number is 
// Armstrong number or not 
string isArmstrong(int number) 
{ 
	// Calling order function 
	int exponent = order(number); 
	int temp = number, sum = 0; 
	while (temp) 
	{ 
		int digit = temp%10; 
		sum += power(digit, exponent); 
		temp = temp/10; 
	} 

	// If satisfies Armstrong condition 
	return ((sum == number) ? "Armstrong!" : "Not an Armstrong!"); 
} 

int main() 
{ 
	int x; 
	cout<<"Number: "; 
	cin>>x;
	cout << isArmstrong(x) << endl; 
	return 0; 
} 
