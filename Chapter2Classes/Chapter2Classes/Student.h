#pragma once
#include <string>
using namespace std;

enum class HairColor { brown, black, red };
class Student
{

private:
	string name;
	int id;
	HairColor hairColor;

public:
	string printInfo();
	Student(string, HairColor, int);
};

