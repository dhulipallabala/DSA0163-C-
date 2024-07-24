#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor declaration
    Rectangle(double l, double w);

    // Method to display the area of the rectangle
    void displayArea() const;
};

// Constructor definition outside of the class
Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

// Method to display the area of the rectangle
void Rectangle::displayArea() const {
    double area = length * width;
    std::cout << "The area of the rectangle is: " << area << std::endl;
}

int main() {
    double length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Create an instance of Rectangle
    Rectangle rect(length, width);

    // Display the area of the rectangle
    rect.displayArea();

    return 0;
}

