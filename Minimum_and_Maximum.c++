#include <iostream>
using namespace std; 
int main() {
int array[5], maximum, minimum, i; // Declare the variables for minimum and maximum  
cout << "Enter the numbers: "; // To enter the numbers 
for (i=0; i<5;i++) { // For loop to enter in the array 
cin >> array[i]; // Produces the numbers in the array 
}
cout << "The array is: "; // To display the numbers in the array
for (i=0;i<5;i++) { // For the numbers inside the array 
cout << array[i] << " "; // To display the numbers 
}
maximum=array[0]; // From the first number in the array 
minimum=array[0]; // From the first number in the array 
for (i=0; i<5; i++) { // To distinguish max and min 
if(maximum < array[i]) { // For the maximum number 
maximum=array[i]; // To store it in the array 
}
else if (minimum > array[i]) { // For the minimum number 
minimum=array[i]; // To store it in the array 
}
}
cout << "\nMaximum number of the array: " << maximum; // Display the maximum number 
cout << "\nMinimum number of the array: " << minimum; // Display the minimum number 
cout << "\n {2, " << maximum << "} "; // To place a number two with the maximum number (as required)
cout << "\n {1, " << minimum << "} "; // To place a number one with the minimum number (as required)
}
