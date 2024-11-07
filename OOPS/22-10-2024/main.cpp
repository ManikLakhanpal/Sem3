#include <iostream>

using namespace std;

class Shape {
public:
    virtual void area() = 0;
    
    virtual ~Shape() {
        cout << "Object was deleted;" << endl;
    }
};

class Rectangle: public Shape {
private:
    int length;
    int width;
public:
    Rectangle(int length, int width) {
        this->length = length;
        this->width = width;

        cout << "Rectange with \nlength: " << length << "\nwidth: " << width << "\nCreated!" << endl;
    }

    void area() {
        cout << "Area of rectangele = " << this->length * this->width << endl;
    }

    ~Rectangle() {
        cout << "Rectangle was deleted;" << endl;
    }
};

class Circle: public Shape {
private:
    int radius;
public:
    Circle(int radius) {
        this->radius = radius;

        cout << "Rectange with \nradius: " << radius << "\nCreated!" << endl;
    }

    void area() {
        cout << "Area of circle = " << 3.14 * this->radius * this->radius << endl;
    } 

    ~Circle() {
        cout << "Circle was deleted;" << endl;
    }
};

int main() {
    Rectangle rect(10, 3);
    cout << "\n\n\n";

    Circle cir (10);
    cout << "\n\n\n";

    rect.area();

    cout << "\n\n\n";

    cir.area();

    return 0;
}