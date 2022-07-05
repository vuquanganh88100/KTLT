#include "Student.h"
#include<iostream>
using namespace std;
Credit_program::Credit_program() :Student(){
	number_of_credit = 0;
} 
int Credit_program::getNumber_of_credit() {
	return Credit_program::getNumber_of_credit();
}
void Credit_program::setNumber_of_credit() {
	this->number_of_credit = number_of_credit;
}
void Credit_program::display() {
	Student::display();
	cout << "The number of credit: " << number_of_credit << endl;
}
