#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    // Constructor with default parameter
    Student(string n = "Unknown") : name(n) {}

    void printName() const {
        cout << "Student's Name: " << name << endl;
    }
};

int main() {
    Student s1;            // No name provided
    Student s2("John Doe"); // Name provided

    s1.printName(); // Outputs: Student's Name: Unknown
    s2.printName(); // Outputs: Student's Name: John Doe

    return 0;
}

