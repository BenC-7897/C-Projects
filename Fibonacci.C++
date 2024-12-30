#include <iostream> 
using namespace std; 
int fibonacci(int); 
int main() {
  int i, next_term, first_term=0, second_term=1, terms; // Declare the variables and start the count 
  cout << "How many fibs: "; // How many terms 
  cin >> terms; 
  cout << first_term << " " << second_term << " "; // Print out the first and second term  
  for (i=2; i<terms; i++) { // As long as there are two terms 
  next_term = first_term+second_term; // Fibonacci formula 
  cout << next_term << " "; // Print out the next term 
  first_term = second_term; // First becomes second 
  second_term = next_term; // Second becomes the sum of the next terms 
}
  return 0; // Terminate 
} 
