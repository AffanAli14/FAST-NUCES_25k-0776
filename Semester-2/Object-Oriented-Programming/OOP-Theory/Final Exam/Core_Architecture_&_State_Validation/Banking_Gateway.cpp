#include "iostream"
using namespace std;

class Transaction {
    protected:
    int transactionID;
    public:
    Transaction(int id) : transactionID(id) {}
    virtual double calculateFee() = 0;
};

class Deposit : public Transaction {
    public:
    Deposit(int id) : Transaction(id) {}
    double calculateFee() {
        return 1.50;
    }
};

class Withdrawal : public Transaction {
    public : 
    Withdrawal(int id) : Transaction(id) {} 
    double calculateFee() {
        return 3.00;
    }
};

int main() {
    Deposit dep(1001);
    Withdrawal with(1002);
    cout << "Deposit Fee: $" << dep.calculateFee() << endl;
    cout << "Withdrawal Fee: $" << with.calculateFee() << endl;
}