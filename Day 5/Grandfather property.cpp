#include <iostream>

class Grandfather {
protected:
    double property;
public:
    Grandfather() : property(500) {} // Property value in crores
    double getProperty() const {
        return property;
    }
};

class Son : public Grandfather {
public:
    double getInheritedProperty() const {
        return property; // Accessing property from Grandfather class
    }
};

class Grandson : public Son {
public:
    void displayProperty() const {
        std::cout << "Grandson inherits property worth: " << getInheritedProperty() << " Cr" << std::endl;
    }
};

int main() {
    Grandson grandson;
    grandson.displayProperty();
    return 0;
}

