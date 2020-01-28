#include "Student.h"

Student::Student(string name, HairColor hairColor, int id) {
	this->name = name;
	this->hairColor = hairColor;
	this->id = id;
}

string Student::printInfo() {
	string hair;
	switch (hairColor) {
	case HairColor::brown:
		hair = "brown";
		break;
	case HairColor::black:
		hair = "black";
		break;
	case HairColor::red:
		hair = "red";
		break;
	}
	return name + " " + hair + " " + to_string(id);
}