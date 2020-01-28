#include "Student.h"
#include <iostream>

int main() {
	HairColor hair = HairColor::brown;
	Student s1("Jackson", hair, 123);
	string info = s1.printInfo();
	std::cout << info;
}