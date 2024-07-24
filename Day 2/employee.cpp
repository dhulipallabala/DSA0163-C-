#include <iostream>
using namespace std;

class Employee {
public:
    void input() {
        cout << "Enter taxable income: ";
        cin >> taxableIncome;
    }

    void calculateTax() {
        if (taxableIncome <= 60000)
            tax = 0;
        else if (taxableIncome <= 150000)
            tax = taxableIncome * 0.05;
        else if (taxableIncome <= 500000)
            tax = taxableIncome * 0.1;
        else
            tax = taxableIncome * 0.15;
    }

    void display() {
        cout << "Taxable Income: " << taxableIncome << ", Tax: " << tax << endl;
    }

private:
    double taxableIncome, tax;
};

int main() {
    Employee emp;
    emp.input();
    emp.calculateTax();
    emp.display();

    return 0;
}
