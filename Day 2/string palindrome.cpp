#include<iostream>
#include<string>
using namespace std;

int main() {
    string str, reverse;
    getline(cin, str);

    int n = str.length();
    reverse.resize(n);

    for (int i = n - 1, j = 0; i >= 0; i--, j++) {
        reverse[j] = str[i];
    }
    if (str == reverse)
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}
