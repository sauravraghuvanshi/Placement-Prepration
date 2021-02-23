// C++ Code to explain how " cin.sync();" 
// discards the input buffer 
#include<iostream> 
#include<ios>	 
#include<limits> 
using namespace std; 

int main() 
{ 
	int a; 
	char str[80]; 
	
	// Enter input from user 
	// - 4 for example 
	cin >> a; 
	
	// Discards the input buffer 
	cin.sync(); 
	
	// Get input from user - 
	// GeeksforGeeks for example 
	cin.getline(str, 80); 
	
	// Prints 4 
	cout << a << endl; 
	
	// Printing string - this 
	// will print string now 
	cout << str << endl; 

	return 0; 
} 
