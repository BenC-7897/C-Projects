#include <iostream>
using namespace std; 
class Randgenerator { // Declare random generator as a class 
private: 
  double lower, higher; // Declare the lower and higher random numbers 
public: 
  Randgenerator() : lower(0), higher(1) {
  srand(time(nullptr)); // Pick a random number between zero and one using a literal pointer function 
}
  Randgenerator(double lower_number, double higher_number): lower(lower_number), higher(higher_number) {
  srand(time(nullptr)); // Should there be no definite range 
}
double get() {
  double random = static_cast<double>(rand())/RAND_MAX; // To generate the actual random number using a RAND_MAX as a converter 
  return lower + random * (higher-lower); // Return a lower number and then a random multiplied by the difference between the higher number and lower number 
}
}; 
int main() {
  Randgenerator rg1; // First random number generator 
  cout << "Here are some random numbers between 0 and 1" << endl; // Display 
  cout << rg1.get() << endl; // To get a random number in the range
  cout << rg1.get() << endl; // To get a random number in the range
  cout << rg1.get() << endl; // To get a random number in the range
  Randgenerator rg2(100,200); // Second random number generator 
  cout << "Here are some random numbers between 100 and 200" << endl; // Display 
  cout << rg2.get() << endl; // To get a random number in the range
  cout << rg2.get() << endl; // To get a random number in the range
  cout << rg2.get() << endl; // To get a random number in the range
}
