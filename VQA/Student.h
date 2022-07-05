#pragma once
#include<iostream>
using namespace std;

class Student {
protected:
	string name;
	int id;
	int course;
	int check; //1:credit 2: model
public:
	Student();
	Student(string name, int id, int course, int check);
	string getName();
	void setName(string name);
	int getId();
	void setId(int id);
	int getCourse();
	void setCourse(int course);
	int getCheck();
	void setCheck(int check);
	void display();


};
class Model_program :public Student {
private:
	double gpa;
public:
	Model_program();
	Model_program(string name, string check, int id, int course, double gpa);
	int getGpa();
	void setGpa();
	void display();
};
class Credit_program :public Student {
private:
	int number_of_credit;
public:
	Credit_program();
	Credit_program(string name, string check, int id, int course, int number_of_credit);
	int getNumber_of_credit();
	void setNumber_of_credit();
	void display();
};
