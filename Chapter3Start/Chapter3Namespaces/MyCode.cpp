#include "NamespaceExample.h"
#include <iostream>

int My_code::main() {
	complex z;
	auto z2 = sqrt(z);
	// std::cout << '{' << z2.real() << ',' << z2.imag() << "}\n";
}

// using a namespace, we can use reserved words or things used by other classes, e.g. main and sqrt.