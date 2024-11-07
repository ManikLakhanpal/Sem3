#include <iostream>

using namespace std;

class Complex {
    private:
    int real;
    int imaginary;

    public:
    Complex(int a, int b): real(a), imaginary(b) {
        cout << "Object created" << endl;
    }

    void print_details() {
        cout << "Value : " << real  << " + " << imaginary << "i" << endl;
    }

    friend Complex operator+(const Complex &c1, const Complex &c2);
}

Complex operator+(const Complex &c1, const Complex &c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main() {
    cout << "Ok" << endl;

    wow::display();

    return 0;
}