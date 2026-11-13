#include <iostream>
using namespace std;

// class Mobile
// {
// public:
//     string name = "koi sa bhi phone";
// };

class Bank
{
private:
    int balance = 1000;

public:
    Bank()
    {
        cout << "Bank constructor called" << endl;
        // balance = bal;
    }

    Bank(int bal)
    {
        cout << "Bank constructor called" << endl;
        balance = bal;
    }

    Bank(int bal, string name)
    {
        cout << "Bank constructor called" << endl;
        balance = bal;
    }

    int getBalance()
    {
        return balance;
    }

    void setBalance(int bal)
    {
        balance = bal;
    }

    void tax()
    {
        balance = balance - (balance * 0.1);
    }

    ~Bank()
    {
        cout << "Bank destructor called" << endl;
    }
};

int main()
{

    Bank sbi;
    Bank hdfc(5000);
    Bank icici(10000, "Alice");

    cout << sbi.getBalance() << endl;
    sbi.setBalance(200000);
    sbi.tax();
    cout << hdfc.getBalance() << endl;
    // sbi.balance = 200000;
    // cout << sbi.balance << endl;

    // sbi.balance = 200000;
    // Mobile samsung;
    // cout << samsung.name << endl;

    // samsung.name = "Samsung Galaxy S21";
    // cout << samsung.name << endl;
    return 0;
}