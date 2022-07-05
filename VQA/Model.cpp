#include "Student.h"
#include<iostream>
using namespace std;
Model_program::Model_program() :Student() {
	gpa= 0;
}
Model_program::Model_program() :Student(name, id, course, check) {
	this->gpa = gpa;
}
int Model_program::getGpa() {
	return Model_program::getGpa();
}
void Model_program::setGpa() {
	this->gpa = gpa;
}
void Model_program::display() {
	Student::display();
	if (check == 2) {
		cout << "Gpa: " << gpa << endl;
	}
}
	
