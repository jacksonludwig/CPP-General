// Unlike Java, C#, and other languages, but like C, that is true for all types,
// not just for ints. If we want different objects to refer to the same (shared) value, 
// we must say so. 

#include <iostream>
#include <vector>

using namespace std;

void copyArray();
void copyArrayReference();
bool accept();
bool accept2();
void do_something(vector<int>&);

int main() {
	//copyArray();
	//copyArrayReference();
	//accept();
	accept2();
	return 0;
}

void copyArray() {
	int a1[6] = { 1,2,3,4,5,6 };
	int a2[6];

	for (auto i = 0; i < 6; i++) {
		a2[i] = a1[i];
	}

	cout << "Original array: ";

	for (auto i : a1) {
		cout << i << " ";
	}

	cout << "\nCopied array: ";

	for (auto i : a2) {
		cout << i << " ";
	}
}

void copyArrayReference() {
	int v[] = { 0,1,2,3,4,5,6 };

	for (auto i : v) {
		cout << i << " ";
	}

	for (auto& x : v) {
		++x;
	}

	cout << "\n";

	for (auto i : v) {
		cout << i << " ";
	}
}

bool accept() {
	cout << "Do you want to proceed? (y or n)\n";
	char answer = 0;
	cin >> answer;

	if (answer == 'y') {
		cout << "returning true...";
		return true;
	}
	else {
		cout << "returning false...";
		return false;
	}
}

bool accept2() {
	cout << "Do you want to proceed? (y or n)\n";
	char answer = 0;
	cin >> answer;

	switch (answer) {
	case 'y':
		return true;
	case 'n':
		return false;
	default:
		cout << "no will be assumed...";
		return false;
	}
}

void do_something(vector<int>& v) {
	if (auto n = v.size()) {
		//... we get here if n!=0 ...
		// this shows automatic computation of most common check (ints auto checked against 0)
	}
}
