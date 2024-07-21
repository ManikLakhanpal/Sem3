#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string name;
    int age;
    int cc;

public:
    Car(string a, int b, int c) : name(a), age(b), cc(c) {
        cout << "Object was created " << endl;
    } 

    void details() {
        cout << "Name : " << name << "\nAge : " << age << "\nCC : " << cc << endl;
    }

};

class normalCar: public Car {
    public:
    normalCar(string a, int b, int c) : Car(a, b, c) {}
    
    void type() {
        cout << "A normal car" << endl;
    }
};

int main() {
    normalCar honda("City", 1, 1500);
    honda.type();


    return 0;
}