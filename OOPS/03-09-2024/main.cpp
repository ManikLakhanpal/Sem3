#include <bits/stdc++.h>

using namespace std;

int main() {
    string a = "Manik";

    array<int, 5> arr = {1, 4, 5, 6, 7};

    for (auto it= arr.begin; it != arr.end; it++) {
        cout << *it << " ";
    }

    cout << "==================" << endl;

    for (auto it = arr.rbegin(); it>arr.rend(); it++) {
        cout << *it << " ";
    }

    cout << "==================" << endl;

    for (auto it = arr.end() - 1; it>=arr.begin(); it--) {
        cout << *it << " ";
    }

    return 0;
}