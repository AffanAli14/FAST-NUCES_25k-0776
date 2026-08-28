#include "iostream"
#include "exception"
using namespace std;

class InsufficientFundsError : public exception {
    public :
    const char* what() const noexcept override {
        return "Insufficient funds for withdrawal";
    }
};

class Account {
    double balance = 100.0;
    public :
    void withdraw(double amount) {
        if(amount > balance) {
            throw InsufficientFundsError();
        }
        balance -= amount;
        cout << "Dispensing $" << amount << ". New balance: $" << balance << endl;
    }
};

int main() {
    Account myAccount;

    try {
        cout << "Attempting to withdraw $500.00..." << endl;
        myAccount.withdraw(500.0);
    }
    catch(exception& e) {
        cout << "Transaction Failed: " <<e.what() << endl;
    }
}