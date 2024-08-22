#include <iostream>

using namespace std;

class Complex {
private:
    int real, imaginary;

public:
    Complex(int a = 0, int b = 0): real(a), imaginary(b) {
        cout << "Complex Object was created." << endl;
    }

    void print_number() {
        cout << "Complex number : " << real << " + " << imaginary << "i " << endl;
    }

    friend Complex operator+(const Complex &c1, const Complex &c2);
};

Complex operator+(const Complex &c1, const Complex &c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main() {
    Complex *text = new Complex(5, 3);
    Complex C2(3, 5);

    Complex sum = *text + C2;
    sum.print_number();

    return 0;
}