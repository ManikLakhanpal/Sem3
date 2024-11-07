#include <iostream>

using namespace std;

int main() {
    int size, shift;
    
    cout << "Enter size: ";
    cin >> size;
    
    cout << "Shift amount: ";
    cin >> shift;
    
    int arr[size];
    
    for (int i=0; i < size; i++) {
        cout << "Size " << i+1 << ": ";
        cin >> arr[i];
    }
    
    for(int i = shift; i<size; i++) {
        cout << arr[i] << " ";
    }
    
    for(int i = 0; i<shift; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
