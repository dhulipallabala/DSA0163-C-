#include <iostream>

class FloydsTriangle {
private:
    int rows;

public:
    // Constructor to initialize the number of rows
    FloydsTriangle(int r) : rows(r) {
        std::cout << "Floyd's Triangle with " << rows << " rows:" << std::endl;
        printTriangle();
    }

    // Destructor
    ~FloydsTriangle() {
        std::cout << "Floyd's Triangle printed." << std::endl;
    }

private:
    void printTriangle() {
        int num = 1;
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                std::cout << num << " ";
                ++num;
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int rows;

    std::cout << "Enter the number of rows for Floyd's Triangle: ";
    std::cin >> rows;

    // Create an instance of FloydsTriangle
    FloydsTriangle triangle(rows);

    return 0;
}

