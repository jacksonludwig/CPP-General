#pragma once
struct Vector {
	int sz;
	double* elem;
};

void vectorInit(Vector&, int);

double readAndSum(int);