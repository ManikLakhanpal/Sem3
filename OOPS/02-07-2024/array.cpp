#include <iostream>

using namespace std;

void print(int &a, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(&a + i) << " " << endl;
    }
}

int main() {
    int size = 5;
    int a[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter " << i+1 << " ";
        cin >> *(a + i);
    }
    

    print(a[0], size);
    

    return 0;
}