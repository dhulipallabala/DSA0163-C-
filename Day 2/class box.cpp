#include <iostream>
using namespace std;

class Box {
public:
    // Public variable
    int length;

    // Constructor
    Box(int l, int w) : length(l), width(w) {}

    // Public member function to set the width
    void setWidth(int w) {
        width = w;
    }

    // Public member function to get the width
    int getWidth() {
        return width;
    }

private:
    // Private variable
    int width;
};

int main() {
    // Create a Box object
    Box myBox(10, 5);

    // Print the initial length and width
    cout << "Initial length: " << myBox.length << endl;
    cout << "Initial width: " << myBox.getWidth() << endl;

    // Set a new width
    myBox.setWidth(7);

    // Print the updated length and width
    cout << "Updated length: " << myBox.length << endl;
    cout << "Updated width: " << myBox.getWidth() << endl;

    return 0;
}
