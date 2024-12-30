#include <iostream> 
#include <iomanip>
#include <cmath> 

int sumCal(int grades[], int length); // Class to calculate grades 
double averageCal(int grades[], int length); // Class to calculate the average of grades 
double st_devCal(int grades[], int length); // Class to calculate grade standard deviation 
int main (int argc, char *argv[]) {
  int length = argc-1; // Number of students 
  int grades[length]; // Number of grades based on number of students 
  int sum=0; // Start sum of grades at zero 
  double average=0; // Start the average of grades at zero 
  double standard_deviation=0; // Start the standard deviation at zero 
  for (int i=0; i<length; i++) {
    grades[i] = atoi(argv[1]); // Go through the grades one by one 
} 
sum=sumCal(grades, length); 
average=averageCal(grades, length); 
standard_deviation=st_devCal(grades, length); 
  cout << "The sum of the grades of students is : \n" << sums; // To print out the total sum 
  cout << "The average of the grades of students is : \n" << average; // To print out the average 
  cout << "The standard deviation of the grades of students is : \n" << standard_deviation; // To print out the standard deviation 
  return 0; 
} 
int sumCal(int grades[], int length) { 
  int sum=0; 
  for (int i=0; i<length; i++) {
    sum +=grades[i]; // Increase the sum 
} 
  return sum; // Return the sum 
} 
double averageCal(int grades[], int length) { 
  int sum=sumCal(grades, length);
  return (double) sum/length; // Calculate average based on sum 
} 
double st_devCal(int grades[], int length) { 
  double sd=0; 
  double mean=0; 
  mean=averageCal(grades, length); 
  for (int i=0; i<length;i++) { 
    sd=pow((grades[i]-average),2); // Calculate standard deviation based on average
}
  sd=sqrt(sd/length); // Standard deviation of students 
  return sd; // Return standard deviation 
} 
