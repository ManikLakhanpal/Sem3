#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class function." << endl;
    }
};

class Intermediate : public Base {
public:
    void intermediateFunction() {
        cout << "Intermediate class function." << endl;
    }
};

class Derived : public Intermediate {
public:
    void show() {
        cout << "Derived class function." << endl;
    }
};

int main() {
    Derived obj;
    obj.display();             
    obj.intermediateFunction(); 
    obj.show();
    return 0;
}