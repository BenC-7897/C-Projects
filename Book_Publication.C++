#include <iostream>
#include <string> 
using namespace std; 
class Book { // Class to construct a book 
  public: // To access the codes from any part of the programme 
  string book_name, book_author; // To declare the book name and book author variables (using string)
  int publication_year; // To declare the year of publication as an integer 
  void print () { // Void function to display the information 
  cout << book_author << ", " << book_name << ", " << publication_year; // To do the actual displaying of the information 
}
}; // To close the class function 
int main() {
  Book cpp_book; // To declare the class in int main 
  cpp_book.book_name =  "A Tour on C++"; // Declare the book name in int main 
  cpp_book.book_author = "Bjarne Stroustrup"; // Declare the book author in int main 
  cpp_book.publication_year = 2013; // Declare the year of publication in int main 
  cpp_book.print(); // Declare the void print function in int main 
  return 0; // Terminate the task 
}
