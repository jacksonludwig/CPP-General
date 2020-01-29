// you would declare this a module and export it here

#include <stdexcept>
#include <iostream>
class Vector {
public:
	Vector(int s);
	double& operator[](int i);
	int size();
private:
	double* elem;
	int sz;
};

Vector::Vector(int s) :elem{ new double[s] }, sz{ s } {} // constuctor in init. list format

double& Vector::operator[](int i) {
	return elem[i];
}

int Vector::size() {
	return sz;
}

/*
export int size(const Vector& v) {
	return v.size();
}
*/

void test() { // try-catch-throw example
	try {
		Vector v(-20);
	}
	catch (std::length_error& err) {
		// handle negative size (length error should be thrown from constructor)
		std::cerr << "error";
		throw; // rethrow
		// program keeps running! we handled this in constructor (see text)
	}
	catch (std::bad_alloc& err) {
		// handle memory exhaustion
		std::terminate();
		// program ends! we didn't handle this
	}
}

// AVOID COPYING IN FUNCTIONS TO INCREASE EFFICIENCY
// PASS BY (const) REFERENCE (&), DEFAULT IS PASS BY VALUE
// FOR SMALL THINGS COPY, FOR LARGE USE REF

void print(int value, int base = 10); // this sets a default for base to 10 in the function, otherwise it's whatever the user sets like normal.
