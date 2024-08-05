#include <iostream>

using namespace std;

class Rectangle {
private:
    int height;
    int width;

public:
    Rectangle(int a, int b);
    void area();

    ~Rectangle() {
        cout << "Delete" << endl;
    }
};

Rectangle::Rectangle(int a, int b) : height(a), width(b) {
    cout << "Created\n";
}

void Rectangle::area() {
    cout << "Area: " << height * width << endl;
}

int main() {
    Rectangle rect(10, 20);
    rect.area();
    return 0;
}
