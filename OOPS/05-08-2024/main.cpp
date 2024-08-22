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

    void add_numbers(int a = 0, int b = 0) {
        real += a;
        imaginary += b;

        print_number();
    }

};

int main() {

    Complex text(5, 3);
    Complex C2(3, 5);

    text.print_number();
    text.add_numbers(3, 5);

    return 0;
}
