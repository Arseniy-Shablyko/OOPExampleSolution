#include <iostream>
using namespace std;

class Integer {
private:
	int number;

	int convert();

public:
	Integer() : Integer(1) {}
	Integer(int number);
	~Integer();

	int getInt();
	void setInt(int number);
};