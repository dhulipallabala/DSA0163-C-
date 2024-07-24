#include <iostream>
using namespace std;

class Shape {
public:
    // Method to print the area of a rectangle
    void printArea(double length, double breadth) const {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }

    // Method to print the area of a square
    void printArea(double side) const {
        cout << "Area of Square: " << side * side << endl;
    }
};

int main() {
    Shape shape;

    shape.printArea(5, 3); // Rectangle with length 5 and breadth 3
    shape.printArea(4);    // Square with side 4

    return 0;
}

