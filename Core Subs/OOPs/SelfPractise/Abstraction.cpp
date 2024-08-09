#include <iostream>
using namespace std;

class AbstractPrinter {
public:
    // Pure virtual function - Interface for derived classes
    virtual void print() = 0; // This is an abstraction
};

class LaserPrinter : public AbstractPrinter {
public:
    void print() override {
        cout << "Laser Printer is printing a document..." << endl;
    }
};

class InkjetPrinter : public AbstractPrinter {
public:
    void print() override {
        cout << "Inkjet Printer is printing a photo..." << endl;
    }
};

int main() {
    AbstractPrinter* printer;

    LaserPrinter laserPrinter;
    InkjetPrinter inkjetPrinter;

    printer = &laserPrinter;
    printer->print();  // Abstraction: We don't care how printing is done

    printer = &inkjetPrinter;
    printer->print();  // Abstraction: We don't care how printing is done

    return 0;
}
