Formatted Payslip
#include <string> 
#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() {
  const double BASIC_hours = 35; // Set the normal working hours 
  const double overtime_mult = 1.5; // Set overtime pay factor 
  const double tax_rate = 0.2; // Set tax rate 
  const double PRSI = 0.025; // Set PRSI rate 
  double hours, rph, tax_credit, tax, prsi, gross_pay, net_pay, overtime_pay; // Declare the main variables 
  string name; // Declare employee name 
  cout << "Enter hours, hourly rate, tax credit, name: " << endl; // Enter the values  
  cin >> hours >> rph >> tax_credit; // Store the values 
  getline(cin, name); // Format the name 
  gross_pay = hours*rph; // Gross pay formula 
  if (hours > BASIC_hours) { // As long as the working hours are above the normal working hours 
    overtime_pay = (hours-BASIC_hours)*rph*overtime_mult; // Overtime pay formula 
    gross_pay = overtime_pay + (BASIC_hours*rph); // Gross pay formula 
} 
  else (gross_pay = rph*hours); // For normal working hours 
      tax = (tax_rate*gross_pay) - tax_credit; // Tax formula 
  if (tax<0) tax=0; // If tax is less than zero 
  PRSI = PRSI*gross_pay; // PRSI formula 
  net_pay = gross_pay-tax-PRSI; // Net pay formula 
  cout << fixed << setprecision(2); // Print out in two decimals 
  cout << "Name: " << setw(24) << right << name << endl; // To format the name 
  cout << "Hours: "<< setw(23) << hours << endl; // To format the hours worked 
  cout << "Hourly Rate: " << setw(17) << rph << endl; // To format the hourly rate 
  cout << "Gross Wage: " << setw(18) << gross_pay << endl; // To format gross wage 
  cout << "Tax @ 20%: " << setw(19) << tax << endl; // To format tax
  cout << "PRSI @ 2.5%: " << setw(17) << PRSI << endl; // To format PRSI 
  cout << "---------------" << endl; // Calculation
  cout << "Net Pay: " << setw(21) << net_pay << endl; // Format net pay  
  return 0; 
}  
