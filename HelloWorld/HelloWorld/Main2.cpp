#include <iostream>

using namespace std;

double square(double);
void printSquare(double);

int main() {
	printSquare(10);
	return 0;
}

double square(double x) {
	return x * x;
}

void printSquare(double x) {
	cout << "the square of " << x << " is " << square(x) << "\n";
}

