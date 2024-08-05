#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    static int nos;
    string name;

public: 
    Car(string a): name(a) {
        cout << "Object was created." << endl;
        nos++;
    };

    ~Car() {
        cout << "Object was deleted." << endl;
    }

    void howMany() {
        cout << "Number of 'Car' objects : " << this->nos << endl;
    }

    friend void print_details(Car &s);
};

void print_details(Car &s) {
    cout << "Name of car : " << s.name << endl;
}

int Car::nos = 0;

int main() {

    Car porsche("911 Carerra");
    Car ferrari("La ferrari");

    print_details(porsche);

    return 0;
}