#include "Students.h"

int main() {
	Student student1{};
	Student student2("Alex");
	Student student3("Matvey", 15);
	Student student4("Bogdan", 15, 9.8, true);

	Student student5(student4);

	cout << endl << student1.toString();
	cout << student2.toString();
	cout << student3.toString();
	cout << student4.toString();
	cout << student5.toString() << endl;

	/*cout << "Before: " << student1.toString() << endl;*/

	/*student1.name = "Alex";
	student1.age = 14;
	student1.mark = 8.9;
	student1.alive = true;*/

	/*cout << "After: " << student1.toString() << endl;*/

	return 0;
}