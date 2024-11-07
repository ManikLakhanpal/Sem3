#include <iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void display1() {
        cout << "Base1 class function." << endl;
    }
};

// Base class 2
class Base2 {
public:
    void display2() {
        cout << "Base2 class function." << endl;
    }
};

// Derived class 1 from Base1
class Intermediate : public Base1 {
public:
    void showIntermediate() {
        cout << "Intermediate class function." << endl;
    }
};

// Derived class that inherits from both Intermediate and Base2
class Final : public Intermediate, public Base2 {
public:
    void showFinal() {
        cout << "Final class function." << endl;
    }
};

int main() {
    Final obj;
    obj.display1();        // Base1 class function
    obj.display2();        // Base2 class function
    obj.showIntermediate(); // Intermediate class function
    obj.showFinal();        // Final class function
    
    return 0;
}