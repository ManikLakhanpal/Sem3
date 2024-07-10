#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
	static int count;
	int age;
	char name[50];

public:
	Student(int a, char b[]) {
		age = a;
		strcpy(name, b);
		count += 1;
}	

	void printData() {
		cout << "Age is : " << age << endl << "Name is : " << name << "\nNumber of Objects : " << count << endl;
	}

};

int Student:: count = 0;

int main() {
	
	Student SujiBoi(42, "Suji Garg");

	SujiBoi.printData();

	Student SujiBo(42, "Suj Garg");

	SujiBoi.printData();

	return 0;
}
