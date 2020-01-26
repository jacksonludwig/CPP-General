#include <iostream>	
#include "Header.h"

using namespace std;

int main() {
	cout << "total: " << readAndSum(6);
	return 0;
}

void vectorInit(Vector& v, int s) {
	v.elem = new double[s];
	v.sz = s;
}

double readAndSum(int s) {
	Vector vect;
	vectorInit(vect, s); // allocate s elements for v

	for (int i = 0; i < s; i++) {
		cout << "Enter element " << i << ": ";
		cin >> vect.elem[i];
	}

	double sum = 0;

	for (int i = 0; i < s; i++) {
		sum += vect.elem[i];
	}

	return sum;
}