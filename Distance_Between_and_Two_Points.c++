#include <iostream> 
#include <cmath> 
#include <iomanip> // For manipulation of the output 
using namespace std; 
void input(double &x, double &x1, double &y, double &y1, double &z, double &z1) { // Declaring the function to input variables
    cout << "\nEnter x1: "; // Enter x1
  cin >> x; 
    cout << "Enter y1: "; // Enter y1 
  cin >> y; 
    cout << "Enter z1: "; // Enter z1
  cin >> z; 
    cout << "\nEnter x2: "; // Enter x2
  cin >> x1; 
    cout << "Enter y2: "; // Enter y2 
  cin >> y1; 
    cout << "Enter z2: "; // Enter z2
  cin >> z1; 
}
void distance_between_points(double x1, double x2, double y1, double y2, double z1, double z2) { // Declaring the function to get the distance between the two points 
    double distance = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2)+pow(z2-z1, 2)); // Distance between two points in 3D 
      cout << fixed << setprecision(3); // Output set to three decimal places 
      cout << "The Distance between two points is: " << distance; // Output the distance 
    return; // Terminate the task 
}
int main() { // To return the double type value 
  double x1, y1, z1, x2, y2, z2; // Variable declaration 
  input(x1,y1,z1,x2,y2,z2); // An array to carry the input function into main 
  distance_between_points(x1,y1,z1,x2,y2,z2); // An array to carry the distance formula into main  
  return 0; // Terminate the task 
}
