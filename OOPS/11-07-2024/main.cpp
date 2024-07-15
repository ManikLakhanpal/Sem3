#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string name;
    int age;
    int power;

public:
    Car(string a, int b, int c) : name(a), age(b), power(c) {
        // name = a;
        // age = b;
        // power = c;

        cout << "Object created." << endl;
    }

    Car(const Car &a) : name(a.name), age(a.age), power(a.power) {
        // name = a.name;
        // age = a.age;
        // power = a.power;

        cout << "Copy Created." << endl;
    }

    void details() {
        cout << "Name : " << name << endl << "Age : " << age << endl << "Power : " << power  << endl;
    }
    
};

int main() {

    Car Mustang("Mustang", 10, 5000);
    Car MyCar(Mustang);

    cout << endl;
    MyCar.details();


    return 0;
}