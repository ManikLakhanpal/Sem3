#include <bits/stdc++.h>
using namespace std;

class Integer {
private:
    int value;

public:
    Integer(int val) {
        value = val;
    }

    void display() {
        cout << value << endl;
    }
};

int main () {

    Integer i(5);

    cout << endl;
    i.display();
    cout << endl;
    
    return 0;
}