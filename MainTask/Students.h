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
		cout << "defualt-constructor";
		name = "no name";
		age = 13;
		mark = 4.0;
		alive = true;
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