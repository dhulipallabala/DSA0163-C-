#include <iostream>

class Series {
private:
    int num;
public:
    // Member function to get input from the user
    void input() {
        std::cout << "Enter a number: ";
        std::cin >> num;
    }

    // Member function to print the Fibonacci series up to the given number
    void show() {
        int first = 0, second = 1, next;
        
        std::cout << "Fibonacci series up to " << num << ": " << std::endl;
        
        for (int i = 0; i < num; ++i) {
            if (i <= 1) {
                next = i;
            } else {
                next = first + second;
                first = second;
                second = next;
            }
            std::cout << next << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Series series;

    series.input(); // Get the number from the user
    series.show();  // Print the Fibonacci series

    return 0;
}

