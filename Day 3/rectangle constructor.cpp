#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    // Constructor with no parameters
    Rectangle() : length(0), breadth(0) {}

    // Constructor with two parameters
    Rectangle(double l, double b) : length(l), breadth(b) {}

    // Constructor with one parameter
    Rectangle(double side) : length(side), breadth(side) {}

    // Method to calculate the area
    double area() const {
        return length * breadth;
    }
};

int main() {
    Rectangle rect1;           // No parameters
    Rectangle rect2(5, 3);      // Two parameters
    Rectangle rect3(4);         // One parameter

    cout << "Area of rectangle with no parameters: " << rect1.area() << endl;
    cout << "Area of rectangle with two parameters: " << rect2.area() << endl;
    cout << "Area of square with one parameter: " << rect3.area() << endl;

    return 0;
}

