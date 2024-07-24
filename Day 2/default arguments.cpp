#include <iostream>
using namespace std;

int sum(int a, int b = 0, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    cout << "Enter four integers (use 0 for default arguments): ";
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "Sum: " << sum(a, b, c, d) << endl;
}
