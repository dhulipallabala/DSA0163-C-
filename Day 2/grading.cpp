#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter Regno: ";
        cin >> regno;
        cout << "Enter marks for 3 subjects: ";
        cin >> mark1 >> mark2 >> mark3;
    }

    void calculate() {
        average = (mark1 + mark2 + mark3) / 3.0;
        if (average > 90)
            grade = 'S';
        else if (average > 80)
            grade = 'A';
        else if (average > 70)
            grade = 'B';
        else if (average > 60)
            grade = 'C';
        else if (average > 50)
            grade = 'D';
        else
            grade = 'F';
    }

    void show() {
        cout << "Name: " << name << ", Regno: " << regno << ", Average: " << average << ", Grade: " << grade << endl;
    }

private:
    string name;
    int regno;
    float mark1, mark2, mark3, average;
    char grade;
};

int main() {
    const int numberOfStudents = 1;
    Student students[numberOfStudents];

    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        students[i].input();
        students[i].calculate();
    }

    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Details of student " << i + 1 << ":\n";
        students[i].show();
    }

    return 0;
}
