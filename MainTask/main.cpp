#include "Initilazer.h"

int main() {
	Student* list = nullptr;
	Initilazer initilazer;

	int count;

	cout << "Input number of students: ";
	cin >> count;

	initilazer.init(list, count);

	for (int i = 0; i < count; i++) {
		cout << list[i].tostring() << endl;
	}

	return 0;
}