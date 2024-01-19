#include <iostream>
using namespace std; 
void swap_variable (int &x, int &y) { // Void function to swap the variables x and y 
  int temporary_variable = x; // Variable to store the value of x 
  x = y; // To swap, x must be equal to y 
  y = temporary_variable; // To truly swap, the value stored temporarily is placed into y 
}
int main() {
  int x_value, y_value; // Declaring the x and y variables in main
  cout << "Enter a value for x: "; // Enter a value for x 
  cin >> x_value; // Takes in the value of x 
  cout << "Enter a value for y: "; // Enter a value for y 
  cin >> y_value; // Takes in the value of y 
  swap_variable(x_value, y_value); // Declaring the function to swap the variables
  cout << x_value << "," << y_value << endl; // Desired output 
}
