#include <iostream>
using namespace std;

class BankAccount
{
  protected:
    double accNumber;
    double balance;

  public:
    BankAccount();
    BankAccount(double accNumber_in, double balance_in);

    double deposit(double amount);
    double withdraw(double am);
    double currBalance();
    virtual void displayInfo();
};

class SavingsAccount : public BankAccount
{
  private:
    double interestRate;

  public:
    SavingsAccount();
    SavingsAccount(double accNumber_in, double balance_in, double interestRate_in);

    double interest();
};
