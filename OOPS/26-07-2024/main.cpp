#include <iostream>
#include <cstring>

using namespace std;

class Car {
private:
    int age;

public:
    Car(int b);

    friend void data();
};

Car::Car(int b) {
    age = b;

    cout << "New object created\nAge : " << age << endl;
};

void data() {
    Car c1(11);
    cout << c1.age << endl;
}

int main() {
    Car mustang(1);

    data();

    return 0;
}