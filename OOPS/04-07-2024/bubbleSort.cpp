#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

}

void bubbleSort(int *array, int size) {
    for (int i = size - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

int main() {
    int array [] {46, 2, 9, 23, 14, 55, 44, 1080, 51};
    int size {9};

    bubbleSort(array, size);
    
    for(int i = 0; i <size; i++) {
        cout << "Element " << i << " :" << array[i] << endl;
    }

    return 0;
}