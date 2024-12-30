#include <iostream>
using namespace std; 
int main() {
  int i; // Integer value 
  cout << "Enter an integer value: " << endl; // Enter an integer value 
  cin >> i; // Store the integer value 
  if (i%2==0) // If there's no modulus
  cout << "This integer is even" << endl; // Print out that the integer is even  
  else cout << "This integer is odd" << endl; // Print out that the integer is odd 
  return 0; 
} 
