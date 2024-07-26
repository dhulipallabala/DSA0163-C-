#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int id;
public:
    virtual void getData() = 0;
    virtual void displayData() = 0;
    virtual double calculateBonus() = 0;
};

class Admin : virtual public Person {
protected:
    double salary;
public:
    void getData() override {
        std::cout << "Enter Admin Name: ";
        std::cin >> name;
        std::cout << "Enter Admin ID: ";
        std::cin >> id;
        std::cout << "Enter Admin Salary: ";
        std::cin >> salary;
    }
    void displayData() override {
        std::cout << "Admin Name: " << name << "\nID: " << id << "\nSalary: " << salary << std::endl;
    }
    double calculateBonus() override {
        return salary * 0.1; // 10% bonus for admin
    }
};

class Account : virtual public Person {
protected:
    double balance;
public:
    void getData() override {
        std::cout << "Enter Account Holder Name: ";
        std::cin >> name;
        std::cout << "Enter Account ID: ";
        std::cin >> id;
        std::cout << "Enter Account Balance: ";
        std::cin >> balance;
    }
    void displayData() override {
        std::cout << "Account Holder Name: " << name << "\nID: " << id << "\nBalance: " << balance << std::endl;
    }
    double calculateBonus() override {
        return balance * 0.05; // 5% bonus for account
    }
};

class Master : public Admin, public Account {
public:
    void getData() override {
        Admin::getData();
        Account::getData();
    }
    void displayData() override {
        Admin::displayData();
        Account::displayData();
    }
    double calculateBonus() override {
        return Admin::calculateBonus() + Account::calculateBonus();
    }
};

int main() {
    Master master;
    master.getData();
    master.displayData();
    std::cout << "Total Bonus: $" << master.calculateBonus() << std::endl;
    return 0;
}

