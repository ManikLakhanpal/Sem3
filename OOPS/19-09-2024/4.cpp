#include <iostream>

using namespace std;

int main() {
    int ap[] = {10, 18, 27, 34, 42};
    int start = ap[0];
    int diff = ap[1] - start;

    for (int i = 0; i < 5; i++) {
        int temp = (start + (i) * diff);
        if (temp ==  ap[i]) {
            cout << "Ok" << endl;
            continue;
        }
        cout << "Not an ap: " << ap[i] << endl << "It should be : " << temp << endl;
        break;
    }

    return 0;
}