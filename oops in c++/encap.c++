#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;   // data hidden

public:
    // Setter function
    void setBalance(int balance) {
      this->  balance = balance;
    }

    // Getter function
    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;

    acc.setBalance(5000);   // setting value
    cout << "Balance: " << acc.getBalance() << endl;  // accessing via method

    return 0;
}