#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int base = 1;
    int len = binary.length();
    for (int i = len - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base = base * 2;
    }
    return decimal;
}

string decimalToBinary(int n) {
    string binary = "";
    while (n > 0) {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n /= 2;
    }
    return binary;
}

int main() {
    int choice;
    cout << "Enter 1 to convert Binary to Decimal, 2 to convert Decimal to Binary: ";
    cin >> choice;
    if (choice == 1) {
        string binary;
        cout << "Enter a binary number: ";
        cin >> binary;
        cout << "Decimal of " << binary << " is " << binaryToDecimal(binary) << ".\n";
    } else if (choice == 2) {
        int decimal;
        cout << "Enter a decimal number: ";
        cin >> decimal;
        cout << "Binary of " << decimal << " is " << decimalToBinary(decimal) << ".\n";
    } else {
        cout << "Invalid choice.\n";
    }
    return 0;
}

