#include <iostream>
using namespace std; 
class Color { // Class to declare colour 
private: 
  double red, green, blue; // Declaring the three pixel colour variables as private 
public: 
  Color(double _red, double _green, double _blue): red(_red), green(_green), blue(_blue) {} // Declaring the three pixel colour variables as public 
  virtual void print() {cout << "[" << red << "," << green << "," << blue << "]"; // To print out the colour
} 
}; 
class Point2D { // Class to declare the 2D point 
private: 
  double x, y; // Declaring the two point variables as private 
public: 
Point2D(double _x, double _y) : x (_x), y(_y) {} // Declaring the two point variables as public 
  virtual void print() {cout << "(" << x << "," << y << ")";
}
}; // To print out the 2D point 
class Pixel: public Point2D { // Class to declare the Pixel inheriting the information from the 2D point class 
private: 
  Color color; // Ensuring Color is a data member 
public: 
  Pixel(double _x, double _y, double _red, double _green, double _blue) : Point2D(_x,_y), color(_red,_green,_blue) {}; // Declaring the variables for the pixel 
  void print() { // To print out the lot 
  cout << "Pixel (x,y) = "; // To print out the 2D point 
  Point2D::print(); // To actually print out the 2D point 
  cout << " Color = "; // To print out the colour 
  color.print(); // To actually print out the colour 
}
};
int main() {
  Pixel pxl(10,20,0.5,0.6,0.7); // Actual point 
  pxl.print(); // To print out the pxl variable 
}
