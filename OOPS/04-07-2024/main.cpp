#include <iostream>
#include <string.h>

using namespace std;

int max(int array[]) {
    int max = array[0];

    for (int i=0; array[i] != '\0'; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

int main() {
    int size;

    cout << "Size : ";
    cin >> size;

    int array[size];

    for(int i = 0; i <size; i++) {
        cout << "Enter " << i + 1 << " element : ";
        cin >> array[i];
    }

    int maxVal = max(array);

    cout << strcmp("bharat", "vilas") << endl;

    return 0;
}