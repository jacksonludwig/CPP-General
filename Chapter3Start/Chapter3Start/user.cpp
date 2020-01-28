#include "Vector.h"
#include <cmath>

double sqrt_sum(Vector& v) {
	double sum = 0;
	for (int i = 0; i < v.size(); i++) {
		sum += std::sqrt(v[i]);
	}
	return sum; // sum of square roots
}