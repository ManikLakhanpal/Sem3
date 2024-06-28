#include <iostream>

using namespace std;

int main() {
    int a = 80;
    int b = {80};
    int c = 80;

    cout << &a; 
    cout << endl << &b;
    cout << endl << &c;

    return 0;
}
