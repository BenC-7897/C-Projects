#include <iostream>
using namespace std; 
class Accumulator {
private: 
  double accumulator_total_value; // Total value in the accumulator 
public: 
  Accumulator(double total_value = 0): accumulator_total_value(total_value) { // Set the total value for the accumulator to zero 
}
void add(double add_to_value) { // To add to the accumulator total 
  accumulator_total_value += add_to_value; // To actually change the accumulator value 
}
void add(Accumulator different_accumulator) {
  accumulator_total_value += different_accumulator.accumulator_total_value; // Should there be a second accumulator 
}
void print() {
  cout << accumulator_total_value << endl; // Display the accumulator total 
}
}; 
int main() {
  Accumulator acc1; // To declare the first accumulator 
  acc1.add(20.6); // Adding to the first accumulator 
  acc1.add(10.4); // Again adding to the first accumulator 
  acc1.add(-2.9); // Subtact to the first accumulator 
  acc1.add(2.5); // Add again 
  cout << "Accumulator 1 value = "; // Display 
  acc1.print(); // Print out the first accumulator value 
  cout << endl; // Go down a line 
  Accumulator acc2; // Declare a second accumulator 
  acc2.add(96.2); // Add to the second accumulator 
  acc2.add(acc1); // Add to the final value of the first accumulator 
  cout << "Accumulator 2 value = "; // Display 
  acc2.print(); // Print out the second accumulator value 
  cout << endl; // Go down a line 
}
