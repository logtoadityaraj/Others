// C++ implementation of above approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function To find digitsum for a number 
int digitsum(int n) 
{ 
	// Logic for digitsum 
	int r = n % 9; 
	if (r == 0) 
		return 9; 
	else
		return r; 
} 

// Function to find minimum digit sum 
int find(int n, int d) 
{ 
	// Variable to store answer 
	// Intialise by 10 as the answer 
	// will always be less than 10 
	int minimum = 10; 


	// Values of digitsum will repeat after 
	// i=8, due to modulo taken with 9 
	for (int i = 0; i < 9; i++) { 
		int current = (n + i * d); 
		minimum = min(minimum, digitsum(current)); 
	} 

	return minimum; 
} 

// Driver Code 
int main() 
{ 
	int n = 2546, d = 124; 
	cout << "Minimum possible digitsum is :"
		<< find(n, d); 

	return 0; 
} 
