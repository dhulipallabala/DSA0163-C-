#include <iostream>
using namespace std;

class AddAmount {
private:
    double amount;

public:
    // Constructor without parameters
    AddAmount() : amount(50) {}

    // Constructor with one parameter
    AddAmount(double addedAmount) : amount(50 + addedAmount) {}

    void displayAmount() const {
        cout << "Final amount in Piggie Bank: $" << amount << endl;
    }
};

int main() {
    AddAmount piggyBank1;           // No additional amount
    AddAmount piggyBank2(25);        // Additional amount is $25

    piggyBank1.displayAmount(); // Outputs: Final amount in Piggie Bank: $50
    piggyBank2.displayAmount(); // Outputs: Final amount in Piggie Bank: $75

    return 0;
}

