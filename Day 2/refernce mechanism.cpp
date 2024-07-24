#include <iostream>

// Function to swap numbers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside swapByValue: a = " << a << ", b = " << b << std::endl;
}

// Function to swap numbers using call by reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside swapByReference: a = " << a << ", b = " << b << std::endl;
}

int main() {
    int x = 10, y = 20;

    // Call by value
    std::cout << "Before swapByValue: x = " << x << ", y = " << y << std::endl;
    swapByValue(x, y);
    std::cout << "After swapByValue: x = " << x << ", y = " << y << std::endl;

    // Call by reference
    std::cout << "Before swapByReference: x = " << x << ", y = " << y << std::endl;
    swapByReference(x, y);
    std::cout << "After swapByReference: x = " << x << ", y = " << y << std::endl;

    return 0;
}

