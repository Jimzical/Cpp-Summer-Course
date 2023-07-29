/*
3) Design a C++ class called &quot;Account&quot; with a private member variable for the
account balance. Implement methods to deposit and withdraw money from the
account. However, throw an exception if the withdrawal amount is greater than
the account balance or if the deposit amount is negative.
*/

#include <iostream>

using namespace std;

class Account
{
private:
    double balance;

public:
    Account(double b)
    {
        balance = b;
    }
    void deposit(double amount)
    {
        if (amount < 0)
        {
            throw -1;
        }
        else
        {
            balance += amount;
        }
    }
    void withdraw(double amount)
    {
        if (amount > balance)
        {
            throw -1;
        }
        else
        {
            balance -= amount;
        }
    }
    double getBalance()
    {
        return balance;
    }
};  

int main()
{
    Account account(100);
    try
    {
        account.deposit(50);
        account.withdraw(175);
    }
    catch (int x)
    {
        cout << "Exception thrown!" << endl;
    }
    cout << "Balance: " << account.getBalance() << endl;
    return 0;
}   
