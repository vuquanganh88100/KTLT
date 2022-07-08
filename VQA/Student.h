#pragma once
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	string name;
	int id;
	int course;
	int check; //1:credit 2: model
public:
	Student();
	Student(string name, int id, int course, int check);
	string getName();
	virtual void setName(string name);
	int getId();
	virtual void setId(int id);
	int getCourse();
	virtual void setCourse(int course);
	int getCheck();
	virtual void setCheck(int check);
	virtual void display();
};
class Model_program :public Student {
private:
	double gpa;
public:
	Model_program();
	Model_program(string name, int id, int course, int check, double gpa);
	int getGpa();
	virtual void setGpa();
	void display();
};
class Credit_program :public Student {
private:
	int number_of_credit;
public:
	Credit_program();
	Credit_program(string name, int id, int course, int check, int number_of_credit);
	int getNumber_of_credit();
	virtual void setNumber_of_credit();
	void display();
};
