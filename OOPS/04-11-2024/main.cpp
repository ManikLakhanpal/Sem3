#include <iostream>
#include <string.h>

using namespace std;

void divide(int a, int b) {
    try {
        if(b == 0) {
            throw "You cannot divide by 0";
        }
        cout << "Calculation: " << a / b << endl;
    } catch(const char* error) {
        cout << error << endl;
    }
}

int main() {
    int a, b;

    cout << "Enter: " << endl;
    cin >> a >> b;

    divide(a, b);

    return 0;
}