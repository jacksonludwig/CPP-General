#include <iostream>

using namespace std;

double square(double);
void print_square(double);

int main() {
	print_square(10);
	return 0;
}

double square(double x) {
	return x * x;
}

void print_square(double x) {
	cout << "the square of " << x << " is " << square(x) << "\n";
}

