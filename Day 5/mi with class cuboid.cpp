#include <iostream>

class Shape {
protected:
    double length, width, height;
public:
    Shape(double l, double w, double h) : length(l), width(w), height(h) {}
};

class Rectangle : public Shape {
public:
    Rectangle(double l, double w, double h) : Shape(l, w, h) {}
    double calculateArea() {
        return length * width;
    }
};

class Cuboid : public Rectangle {
public:
    Cuboid(double l, double w, double h) : Rectangle(l, w, h) {}
    double calculateVolume() {
        return length * width * height;
    }
    void display() {
        std::cout << "Area of Rectangle: " << calculateArea() << std::endl;
        std::cout << "Volume of Cuboid: " << calculateVolume() << std::endl;
    }
};

int main() {
    Cuboid cuboid(5, 3, 4);
    cuboid.display();
    return 0;
}

