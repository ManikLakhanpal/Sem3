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
};

int Car::nos = 0;

int main() {

    Car porsche("911 Carerra");
    porsche.howMany();

    Car ferrari("La ferrari");
    ferrari.howMany();

    return 0;
}