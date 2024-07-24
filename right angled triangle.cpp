#include <iostream>
using namespace std;

class RightAngledTriangle {
private:
    int rows;
    int number;

public:
    // Constructor to create a triangle with a specific number of rows and default number
    RightAngledTriangle(int r) : rows(r), number(1) {}

    // Constructor to create a triangle with a specific number of rows and a specific number to be repeated
    RightAngledTriangle(int r, int num) : rows(r), number(num) {}

    void display() {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << number << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, num;

    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    cout << "Enter the number to be repeated in each row: ";
    cin >> num;

    // Create a triangle with the specified number of rows and number
    RightAngledTriangle triangle(rows, num);
    cout << "Triangle with number " << num << ":" << endl;
    triangle.display();

    return 0;
}

