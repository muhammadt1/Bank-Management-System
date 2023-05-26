#include <iostream>
#include "class.h"
using namespace std;

BankAccount::BankAccount(double accNumber_in, double balance_in)
{
  accNumber = accNumber_in;
  balance = balance_in;
}

SavingsAccount::SavingsAccount(double accNumber_in, double balance_in, double interestRate_in) : BankAccount(accNumber_in, balance_in)
{
  interestRate = interestRate_in;
}

double BankAccount::deposit(double amount)
{
  balance += amount;
  return balance;
}

double BankAccount::withdraw(double am)
{
  balance -= am; 
  return balance;
}

double BankAccount::currBalance()
{
  return balance;
}

void BankAccount::displayInfo()
{
  cout << "Account number: " << accNumber << endl;
  cout << "Balance: $" << balance << endl;
}

double SavingsAccount::interest()
{
  double inter = balance * (interestRate / 100);
  return inter;
}