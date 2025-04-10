#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	double mark;
	bool alive;

	Student(){
		cout << "defualt-constructor" << endl;
		name = "no name";
		age = 13;
		mark = 4.0;
		alive = true;
	}

	Student(string nm) {
		cout << "constructor with arguments (name)" << endl;
		name = nm;
		age = 13;
		mark = 4.0;
		alive = true;
	}

	Student(string nm, int a) {
		cout << "constructor with arguments (name)" << endl;
		name = nm;
		age = a < 13 ? 13 : a;
		mark = 4.0;
		alive = true;
	}

	Student(string nm, int a, double m, bool al) {
		cout << "constructor with arguments (name)" << endl;
		name = nm;
		age = a < 13 ? 13 : a;
		mark = m;
		alive = al;
	}

	Student(Student student) {
		cout << "copy-constructor" << endl;
		name = student.name;
		age = student.age < 13 ? 13 : student.age;
		mark = student.mark;
		alive = student.alive;
	}

	string toString() {
		string s = "Name: " + name;
		s += ", age: " + to_string(age);
		s += ", average mark: " + to_string(mark);
		s += ", alive: ";
		s += alive ? "Yes" : "No";
		s += "\n";
		return s;
	}
};