 
#include<iostream>
#include"Student.h"
#include<vector>
#include<string>
using namespace std;
void get_input_number_of_students(vector<Student>&v1,int p1) {
	for (int j= 0; j < p1;j++) {
		static int i = 1;
		Student v;
		int ID;
		std::string NAME;
		int COURSE;
		int CHECK;
		double GPA;
		int CREDIT;
		cout << "Enter name of student: "  ;
		cin >> NAME;
		cout << "\nEnter the ID: "  ;
		cin >> ID;
		v.setId(ID);
		cout << "\nEnter the Course: "  ;
		cin >> COURSE;
		v.setCourse(COURSE);
		cout << "\nEnter 1:Study credit program . Enter 2: Study model program" ;
		cin >> CHECK;
		v.setCheck(CHECK);
		if (CHECK == 1) {
			cout << "\nGPA ?" ;
			cin >> GPA;
		}
		else if (CHECK == 2) {
			cout << "\nHow many credit ?" ;
			cin >> CREDIT;
		}
		v1.push_back(v);
		i++;
	}
}
void input() {
cout << "\nEnter request" << endl;
	cout << "1: Add student information" << endl;
	cout << "2: Fix student information" << endl;
	cout << "3: Delete student information" << endl;
	cout << "4: Search student information by ID" << endl;
	cout << "5: Search student information by Name" << endl;
	cout << "6: Search student information by course" << endl;
	cout << "7: Statistics of students studying according to the type of credit" << endl;
	cout << "8: Statistics of students studying according to the model program " << endl;
	cout << "9: Exit" << endl;
}
void fixing() {
	cout << "What information do you want to edit ?";
	cout << "1: Name" << endl;
	cout << "2: ID" << endl;
	cout << "3: Course" << endl;
	cout << "4: GPA" << endl;
	cout << "5: The number of credits";
}
int main() {
	int choose;
	int fix;
	int n; // number of student
	vector<Student>v;
	input();
	while (true) {
		cin >> choose;
		switch (choose) {
		case 1:

			cout << "Please input number of students (n>=1): \t";;
			cin >> n;
			while (n <= 0) {
				cout << "Please input a positive numeric data! \n";
				cin.clear(); // reset failed bit
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
				cin >> n;
			}
			get_input_number_of_students(v, n);
			input();
			break;
		case 4:
			cout << "Search student information by ID ";
			int id1;
			cin >> id1;
			for (int i = 0; i < v.size(); i++) {
				if (id1 == v.at(i).getId()) {
					cout << "The information by ID " << endl;
					v.at(i).display();
				}
			}input();
			break;
		case 9:
			break;
		}
	}
}


