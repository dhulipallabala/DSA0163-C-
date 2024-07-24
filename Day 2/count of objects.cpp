#include <iostream>
using namespace std;

class Counter {
public:
    // Constructor
    Counter() {
        count++;
    }

    // Destructor
    ~Counter() {
        count--;
    }

    // Static method to get the current count
    static int getCount() {
        return count;
    }

private:
    // Static variable to keep track of the number of objects
    static int count;
};

// Initialize static member of class Counter
int Counter::count = 0;

int main() {
    cout << "Initial count: " << Counter::getCount() << endl;

    // Create objects of Counter class
    Counter obj1;
    Counter obj2;
    Counter obj3;

    cout << "Count after creating 3 objects: " << Counter::getCount() << endl;

    {
        Counter obj4;
        cout << "Count after creating another object inside a block: " << Counter::getCount() << endl;
    } // obj4 goes out of scope and is destroyed here

    cout << "Count after obj4 is destroyed: " << Counter::getCount() << endl;

    return 0;
}
