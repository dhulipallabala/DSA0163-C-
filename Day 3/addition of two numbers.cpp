#include <iostream>
using namespace std;

class Add {
private:
    int a, b;

public:
    // Constructor
    Add(int x = 0, int y = 0) : a(x), b(y) {}

    // Overload + operator
    Add operator+(const Add& obj) const {
        return Add(a + obj.a, b + obj.b);
    }

    // Method to display the result
    void display() const {
        cout << "Sum: " << a << " + " << b << " = " << a + b << endl;
    }
};

int main() {
    Add num1(5, 10);
    Add num2(15, 20);

    Add sum = num1 + num2;

    sum.display(); // Outputs: Sum: 20 + 30 = 50

    return 0;
}

