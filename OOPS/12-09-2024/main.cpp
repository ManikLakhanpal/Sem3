#include <iostream>

using namespace std;

// int main() {
//     long long a, b, c, d;
//     cin >> a >> b >> c >> d;

//     long long answer = (a % 100)*(b % 100)*(c % 100)*(d % 100);

//     cout << "Last 2 digits : " << answer;

//     if (answer < 10) {
//         cout << 0 << endl;
//     }

//     return 0;
// }

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long l, r;
        long long sum  = 0;

        cin >> l >> r;

        if (l < r) {
            for (int i = l; i <= r; i++) {
                sum += i;
            }
        } else if (r < l) {
            for (int i = r; i <= l; i++) {
                sum += i;
            }
        }

        cout << "Sum of " << i << " : " << sum << endl << endl;

    }

    return 0;
}