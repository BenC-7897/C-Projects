#include <iostream> 
using namespace std; 
int main() {
  int length, width; // Declare the length and width 
  double area; // Declare the area 
  cout << "Enter the length value: "; // Enter a length value 
  cin >> length; // Store the value 
  cout << "Enter the width value: "; // Enter a width value  
  cin >> width; // Store the value 
  area=length*width; // Area formula 
  cout << length << " metres" << " * " << width << " metres= " < area << " square metres: "; // Print out the area  
  cout << endl; // Actually print out the area 
  return 0; 
} 
