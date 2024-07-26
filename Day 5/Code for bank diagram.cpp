#include <iostream>

// Base class
class Bank {
public:
    virtual float getRateOfInterest() const = 0; // Pure virtual function
};

// Derived class SBI
class SBI : public Bank {
public:
    float getRateOfInterest() const override {
        return 5.5; // Example interest rate for SBI
    }
};

// Derived class ICICI
class ICICI : public Bank {
public:
    float getRateOfInterest() const override {
        return 6.0; // Example interest rate for ICICI
    }
};

// Derived class AXIS
class AXIS : public Bank {
public:
    float getRateOfInterest() const override {
        return 5.75; // Example interest rate for AXIS
    }
};

int main() {
    Bank* bank;

    SBI sbi;
    ICICI icici;
    AXIS axis;

    bank = &sbi;
    std::cout << "SBI Rate of Interest: " << bank->getRateOfInterest() << "%" << std::endl;

    bank = &icici;
    std::cout << "ICICI Rate of Interest: " << bank->getRateOfInterest() << "%" << std::endl;

    bank = &axis;
    std::cout << "AXIS Rate of Interest: " << bank->getRateOfInterest() << "%" << std::endl;

    return 0;
}

