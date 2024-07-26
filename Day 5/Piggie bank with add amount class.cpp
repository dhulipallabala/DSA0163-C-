#include <iostream>

class PiggieBank {
protected:
    int amount;
public:
    PiggieBank() : amount(50) {}
    virtual void addAmount(int add = 0) {
        amount += add;
    }
    void display() const {
        std::cout << "Final amount in Piggie Bank: $" << amount << std::endl;
    }
};

class AddAmount : public PiggieBank {
public:
    AddAmount(int add) {
        addAmount(add);
    }
};

int main() {
    PiggieBank base;
    base.display(); // No amount added, just the initial $50

    AddAmount derived(100); // Adds $100 to the initial $50
    derived.display();

    return 0;
}

