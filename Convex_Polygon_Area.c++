#include <iostream>
#include <iomanip> // Manipulator
#include <cmath> // Opens the Maths library 
using namespace std; 
const double PI = 3.14159265358979323846; // Define PI 
int main() {
  double side_length; // Side length has decimals 
  int number_of_sides; // Number of sides must be a whole number
  double ConvexPolygonArea; // Define the Polygon Area variable
  cout << "Enter the length of the side: "; // Enter the side length 
  cin >> side_length; // Returns the value of the side length 
  cout << "Enter the number of sides: "; // Enter the number of sides for the polygon
  cin >> number_of_sides; // Returns the number of sides 
  ConvexPolygonArea = 0.25 * number_of_sides * pow(side_length,2) * 1.0/(tan (PI/number_of_sides)); // Mathematical formula to calculate the area of a regular convex polygon 
  cout << "The area of the regular polygon is " << ConvexPolygonArea << endl; // Returns the area of a regular convex polygon 
}
