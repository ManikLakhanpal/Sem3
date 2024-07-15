#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a[] {5,7,6,8,2,3,10,2,67};

   for (int i = 0; i<= (sizeof(a) / sizeof(a[0])) - 1; i++) {
    for(int j = i +1; j <= (sizeof(a) / sizeof(a[0])); j++) {
        if (a[i] == a[j]) {
            cout << "There is a duplicate of " << a[j] << endl;
            return 0;
        }
    }
   }

    return 0;
}