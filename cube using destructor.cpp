#include <iostream>

class CubeCalculator {
    int maxNumber;

public:
    // Constructor
    CubeCalculator(int max) : maxNumber(max) {}

    // Destructor
    ~CubeCalculator() {
        for (int i = 0; i <= maxNumber; ++i) {
            std::cout << "Cube of " << i << " is " << (i * i * i) << "\n";
        }
    }
};

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    CubeCalculator calculator(num); // Constructor called here
    // Destructor will be called automatically when the object goes out of scope

    return 0;
}


