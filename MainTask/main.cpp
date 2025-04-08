#include "Students.h"

int main() {
	Student* st1 = nullptr;
	Student* st2 = nullptr;

	st1 = new Student;

	st1->name = "Veronika";
	st1->age = 14;
	st1->mark = 9.2;
	st1->alive = true;
	   
	/*st2->name = "Danik";
	st2->age = 15;
	st2->mark = 9.99;
	st2->alive = false;*/

	st2 = st1;

	cout << "Before: " << endl;
	cout << st1->getString();
	cout << st2->getString();

	/*st1 = st2;*/
	st1->name = "Bogdan";

	cout << "After: " << endl;
	cout << st1->getString();
	cout << st2->getString();

	return 0;
}