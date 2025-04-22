#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	int* marks;
	int countMarks;
	bool alive;

	Student() : Student("no name", 13, 0, true){
		cout << "defualt-constructor" << endl;
		name = "no name";
		age = 13;
		countMarks = 0;
		marks = nullptr;
		alive = true;
	}

	Student(string name): Student(name, 13) {
		cout << "constructor with arguments (name)" << endl;
	}

	Student(string name, int age) : Student(name, age, 0, true) {
		cout << "constructor with arguments (name)" << endl;
	}

	Student(string name, int age, int countMark, bool alive) {
		cout << "constructor with arguments (name)" << endl;
		this->name = name;
		this->age = age < 13 ? 13 : this->age;
		this->countMarks = countMark;
		this->marks = new int[countMark] {};
		for (int i = 0; i < countMark; i++) {
			marks[i] = 4;
		}
		this->alive = this->alive;
	}

	Student(const Student& student)
		: Student(student.name, student.age, student.countMarks, student.alive){
		cout << "copy-constructor" << endl;

		for (int i = 0; i < countMarks; i++) {
			marks[i] = student.marks[i];
		}

		alive = student.alive;
	}

	~Student() {
		cout << "destructor" << endl;
		if (countMarks != 0) {
			delete[] marks;
		}
	}

	string convert() {
		string s = "";

		for (int i = 0; i < countMarks; i++) {
			s += to_string(marks[i]) + " ";
		}
	}

	string tostring() {
		string s = "name: " + name;
		s += ", age: " + to_string(age);
		s += ", marks: " + convert();
		s += ", alive: ";
		s += alive ? "yes" : "no";
		s += "\n";
		return s;
	}


};