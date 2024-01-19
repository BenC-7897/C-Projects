Loan Repayment 
#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() {
  const double Annual_Rate = 12; // Set the annual interest rate 
  double loan_amount, monthly_repayment, final_payment, interest, total_interest, monthly_rate; // Declare the main variables  
  cout << "Loan Amount: "; // Enter an amount 
  cin >> loan_amount; // Stores the amount 
  cout << "Monthly Payment: "; // Enter the monthly payment 
  cin >> monthly_payment; // Stores the monthly payment 
  int month=0; // Start the month count 
  monthly_rate=(Annual_Rate/12)/100; // Interest rate formula 
  total_interest=0; // Start the interest at zero 
  while (loan_amount > 0) { // As long as the interest rate is above zero 
  month=month+1; // Increase the month count 
  interest=loan_amount*monthly_rate; // Interest formula 
  loan_amount=(loan_amount+interest)-monthly_payment; // Loan amount formula 
  total_interest=interest+total_interest; // Total interest formula 
}
  final_payment=monthly_payment+loan_amount; // Final monthly payment formula 
  cout << fixed << setprecision(2); // Print out to two decimal places 
  cout << month << " months .\n"; // Print out the months 
  cout << total_interest << " euro total interest .\n"; // Print out the total interest 
  cout << final_payment << " euro final payment .\n"; // Print out the final payment 
}  
