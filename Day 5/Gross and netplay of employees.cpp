#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int emp_id;
    double basic_salary;
public:
    Employee(const std::string &n, int id, double salary)
        : name(n), emp_id(id), basic_salary(salary) {}
    virtual void calculatePay() = 0;
    virtual void displayData() = 0;
};

class Pay : public Employee {
    double gross_pay;
    double net_pay;
public:
    Pay(const std::string &n, int id, double salary)
        : Employee(n, id, salary), gross_pay(0), net_pay(0) {}

    void calculatePay() override {
        gross_pay = basic_salary + (basic_salary * 0.2); // 20% allowance
        net_pay = gross_pay - (basic_salary * 0.1); // 10% tax
    }
    void displayData() override {
        std::cout << "Employee Name: " << name << "\nID: " << emp_id
                  << "\nBasic Salary: $" << basic_salary
                  << "\nGross Pay: $" << gross_pay
                  << "\nNet Pay: $" << net_pay << std::endl;
    }
};

int main() {
    Pay emp("John Doe", 123, 5000);
    emp.calculatePay();
    emp.displayData();
    return 0;
}

