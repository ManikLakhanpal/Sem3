#include <iostream>

using namespace std;

int main() {
    int n, temp;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n -1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << endl;

    cout << "Max: " << arr[sizeof(arr) / sizeof(arr[0]) - 1] << endl;
    cout << "2nd: " << arr[sizeof(arr) / sizeof(arr[0]) - 2] << endl;

    return 0;
}