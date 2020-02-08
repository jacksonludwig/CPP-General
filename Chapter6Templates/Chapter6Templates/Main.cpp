#include "Vector.h"
#include <string>
#include <string.h>
#include <stdio.h>
#include <list>
#include <iostream>

int main() {
	Vector<char> chars(200);
	Vector<std::string> strings(43756);
	Vector<std::list<int>> listsOfInts(2);
	return 0;
}

void write(const Vector<std::string>& vect)
{
	for (int i = 0; i != vect.size(); ++i) {
		std::cout << vect[i] << '\n';
	}
}

void f2(Vector<std::string>& vs) //Vector of some strings
{
	for (auto& s : vs)
		std::cout << s << '\n';

}