#include <iostream>
#include <cstring> // Add this line to include the cstring header
using namespace std;

class Car {
    public:
        int age;
        int price = 1000;
        char name[100];

        // Constructor to initialize age and name
        Car(int a, char b[]) {
            age = a;
            strcpy(name, b);
        }

        void discount(int a ) {
            cout << "Discount : " << price - (price * a / 100) << endl; 
        }
};

int main() {
    Car mustang(1967, "mustang");

    cout << mustang.age << endl;

    mustang.discount(10);

    return 0;
}