#include "Student.h"
#include<iostream>

using namespace std;

	Credit_program::Credit_program(string name, int id, int course, int check, int number_of_credit) : Student(name, id, course, check) {
		this->number_of_credit = number_of_credit;
	}

	int Credit_program::getNumber_of_credit() {
		return number_of_credit;
	}
	void Credit_program::setNumber_of_credit() {
		this->number_of_credit = number_of_credit;
	}

	void Credit_program::display() {
		Student::display();
		cout << "The number of credit:" << number_of_credit << endl;
		if (number_of_credit < 128) {
			cout << "The number of credit <128 so not complete";
		}
		else {
			cout << "Congratulations on your graduation";
		}
	}
