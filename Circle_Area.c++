Circle Area
#include <iostream> 
#include <iomanip> 
#include <cmath> // Maths functions 
using namespace std; 
const double PI=3.142857143; // To declare PI 
int main() {
  int radius; // Radius variable declaration 
  double area; // Area variable declaration 
  cout << "Enter the radius value: "; // Enter radius value 
  cin >> radius; // Store radius value 
  area=PI*pow(radius, 2); // Circle area formula 
  cout << fixed << precision(2); // Print out the circle area to two decimal places 
  cout << "Area of the circle is: " << area; // Print out the circle area 
} 
