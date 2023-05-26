#include <iostream>
#include "class.h"
using namespace std;

int main()
{
  double accountNumber, balance, interestRate;
  cout << "Enter account number: ";
  cin >> accountNumber;
  cout << "Enter initial balance: ";
  cin >> balance;

  BankAccount account(accountNumber, balance);

  int choice;
  SavingsAccount savingsAccount; // Declare the savingsAccount object outside the switch statement

  do {
    cout << "Bank Management System";
    cout <<endl;
    cout << "1. Display Account Info";
    cout <<endl;
    cout << "2. Deposit";
    cout <<endl;
    cout << "3. Withdraw";
    cout <<endl;
    cout << "4. Calculate Interest";
    cout <<endl;
    cout << "5. Exit";
    cout <<endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) 
    {
      case 1:
        account.displayInfo();
        break;

      case 2:
        double depositAmount;
        cout << "Enter amount to deposit: ";
        cin >> depositAmount;
        account.deposit(depositAmount);
        cout << "Deposited: $" << depositAmount << endl;
        break;

      case 3:
        double withdrawAmount;
        cout << "Enter amount to withdraw: ";
        cin >> withdrawAmount;
        account.withdraw(withdrawAmount);
        cout << "Withdrawn: $" << withdrawAmount << endl;
        break;

      case 4:
        cout << "Enter interest rate: ";
        cin >> interestRate;
        savingsAccount = SavingsAccount(accountNumber, balance, interestRate); // Assign the new object to savingsAccount
        savingsAccount.displayInfo();
        cout << "Interest: $" << savingsAccount.interest() << endl;
        break;

      case 5:
        cout << "Exiting... Thank you!\n";
        break;

      default:
        cout << "Invalid choice. Please try again.\n";
        break;
    }
  } while (choice != 5);

  return 0;
}
