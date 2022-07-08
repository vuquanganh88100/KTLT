#include"Student.h"
#include<iostream>
#include<string>
using namespace std;
Student::Student() {
	 name = "";
	id = course =check= 0;
}
Student::Student(string name, int id, int course, int check){
	this->name = name;
	this->id = id;
	this->course = course;
	this->check = check;

}
string Student::getName() {
	return name;
}

void Student::setName(string name) {
	this->name = name;
}
int Student::getId() {
	return id;
}
void Student::setId(int id) {
	this->id = id;
}
int Student::getCourse(){
	return course;
}
void Student::setCourse(int course) {
	this->course = course;
}
int Student::getCheck(){
	return check;
}
void Student::setCheck(int check) {
	this->check = check;
}
void Student::display() {
	cout << "Name: " << getName() << endl;
	cout << "ID: " << getId() << endl;
	cout << "Course: " << getCourse() << endl;
}

