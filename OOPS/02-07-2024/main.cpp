#include <iostream>

using namespace std;

void func1(int, int );

void func2(int &a);

void func3(int *a, int *b);

int main() {
    int x {5}, y{10};

    func3(&x, &y);

    cout << x << " & " << y << endl;

    return 0;
}

void func1(int a, int b) {
    cout << "Sum :" << a + b << endl;
};

void func2(int &a) {
    a += 90;
};

void func3(int *a, int *b) {
    *a += *b;
    *b -= 20;
}