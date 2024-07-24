#include <iostream>
using namespace std;

double calculateSimpleInterest(double principal, double rate, int time) {
    return (principal * rate * time) / 100;
}

int main() {
    double principal;
    int time;
    char seniorCitizen;
    
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the time period (in years): ";
    cin >> time;
    cout << "Is the customer a senior citizen (y/n)? ";
    cin >> seniorCitizen;
    
    double rate = (seniorCitizen == 'y' || seniorCitizen == 'Y') ? 12.0 : 10.0;
    double interest = calculateSimpleInterest(principal, rate, time);
    
    cout << "Simple Interest: " << interest << endl;
    return 0;
}
