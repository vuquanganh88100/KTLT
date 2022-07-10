#include "Student.h"
#include<iostream>
using namespace std;

Model_program::Model_program(string name, int id, int course, int check, double gpa) : Student(name, id, course, check) {
	this->gpa = gpa;
}

int Model_program::getGpa() {
	return gpa;
}
void Model_program::setGpa(double gpa) {
	this->gpa = gpa;
}
void Model_program::display() {
	Student::display();
	cout << "Gpa: " << gpa << endl;
	if (gpa < 5.0) {
		cout << "GPA <5.0 so not complete";
	}
	else {
		cout << "Congratulations on your graduation";
	}
	cout << "\n====================================================================" << endl;
}
