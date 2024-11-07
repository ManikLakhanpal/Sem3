#include <iostream>
#include <string>

using namespace std;

class Father {
private:
    string gender;

public:
    virtual void display() {};
};

class Boy : public Father {
private:
    string g;

public:
    Boy()
    {
        cout << "Child Created" << endl;
    }
    void display()
    {
        cout << "Child: Hi" << endl;
    }
};

int main() {

    Boy b1;
    Father *ptr = &b1;

    ptr->display();

    return 0;
}