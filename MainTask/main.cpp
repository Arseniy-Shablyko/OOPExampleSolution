#include "Students.h"

int main() {
	Student student1{};
	Student student2("Alex");
	Student student3("Alex", 15);
	Student student4("Alex", 15, 9.8, true);

	cout << student1.toString() << endl;
	cout << student2.toString() << endl;
	cout << student3.toString() << endl;
	cout << student4.toString() << endl;

	/*cout << "Before: " << student1.toString() << endl;*/

	/*student1.name = "Alex";
	student1.age = 14;
	student1.mark = 8.9;
	student1.alive = true;*/

	/*cout << "After: " << student1.toString() << endl;*/

	return 0;
}