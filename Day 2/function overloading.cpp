#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two floating point numbers
double add(double a, double b) {
    return a + b;
}

// Function to add two integers and a floating point number
double add(int a, int b, double c) {
    return a + b + c;
}

int main() {
    // Adding two integers
    cout << "Sum of 3 and 4 (int): " << add(3, 4) << endl;

    // Adding three integers
    cout << "Sum of 1, 2, and 3 (int): " << add(1, 2, 3) << endl;

    // Adding two floating point numbers
    cout << "Sum of 2.5 and 3.5 (double): " << add(2.5, 3.5) << endl;

    // Adding two integers and a floating point number
    cout << "Sum of 2, 3 and 4.5 (int, double): " << add(2, 3, 4.5) << endl;

    return 0;
}
