#include "Student.h"
#include<iostream>
using namespace std;
Credit_program::Credit_program() :Student(){
	number_of_credit = 0;
} 
Credit_program::Credit_program() :Student(name, id, course, check) {
	this->number_of_credit= number_of_credit;
}
int Credit_program::getNumber_of_credit() {
	return Credit_program::getNumber_of_credit();
}
void Credit_program::setNumber_of_credit() {
	this->number_of_credit = number_of_credit;
}
void Credit_program::display() {
	Student::display();
	if (check == 1) {
		cout << "The number of credit: " << number_of_credit << endl;
	}
}
