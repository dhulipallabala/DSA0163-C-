#include <iostream>

class Number {
    int num;
public:
    Number(int n) : num(n) {}
    int reverse() { int r = 0; for (int o = num; o != 0; o /= 10) r = r * 10 + o % 10; return r; }
};

int main() {
    int i;
    std::cout << "Enter a number: ";
    std::cin >> i;
    Number n(i);
    std::cout << "Reverse of " << i << " is: " << n.reverse() << std::endl;
    return 0;
}
