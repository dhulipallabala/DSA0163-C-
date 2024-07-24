#include <iostream>
using namespace std;

class SumOfSeries {
public:
    // Constructor for arithmetic series
    SumOfSeries(int a, int d, int n) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a + i * d;
        }
        cout << "Sum of arithmetic series: " << sum << endl;
    }
    
    // Constructor for geometric series
    SumOfSeries(double a, double r, int n) {
        double sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a;
            a *= r;
        }
        cout << "Sum of geometric series: " << sum << endl;
    }
};

int main() {
    int a1 = 1, d = 2, n1 = 5;
    double a2 = 1, r = 2;
    int n2 = 5;

    SumOfSeries arithSeries(a1, d, n1);   // Using the first constructor
    SumOfSeries geomSeries(a2, r, n2);    // Using the second constructor

    return 0;
}
