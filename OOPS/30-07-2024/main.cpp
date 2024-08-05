#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string name;

    Car(string a): name(a) {};
};

class SuperCar {
public:
    SuperCar() {}

    void details(Car &source) {
        cout << "Name of the Super car is : " << source.name << "." << endl;
    } 
};

int main() {
    Car ferrari("296 GTS");

    SuperCar gts;

    gts.details(ferrari);

    return 0;
}