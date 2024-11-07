#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    // for (int i = 0; i < s.length(); i++) {
    //     cout << s[i] << endl;
    // }

    for (char i : s)
    {
        cout << i << endl;
    }
    return 0;
}