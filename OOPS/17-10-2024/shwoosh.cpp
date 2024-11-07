#include <iostream>

using namespace std;

int main() {
    long long int a, b, c, d;

    cin >> a >> b >> c >> d;

    cout << a * b * c * d << endl;

    long long total = (a % 100) * (b % 100) % 100 * (c % 100) % 100 * (d % 100) % 100;

    while(total > 99) {
        total %= 100;
    }

    cout << total << endl;

    return 0;
}