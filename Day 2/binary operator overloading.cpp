#include <iostream>
using namespace std;

class Complex {
public:
    Complex() : real(0), imag(0) {}
    Complex(int r, int i) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator+(const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

private:
    int real, imag;
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;

    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}
