 
#include<iostream>
#include"Student.h"
#include<vector>
#include<string>
using namespace std;
void get_input_number_of_students(vector<std::unique_ptr<Student>>&v1,int p1) {
	for (int j= 0; j < p1;j++) {
		int ID;
		string NAME;
		int COURSE;
		int CHECK;
		double GPA;
		int CREDIT;
		cout << "Enter the information of student " << j + 1 << " :"<<endl;
		cout << "Enter name of student " ;
		cin.ignore();
		getline(cin, NAME);
		cout << "\nEnter the ID: " << endl;
		cin >> ID;
		cout << "\nEnter the Course: " <<endl;
		cin >> COURSE;
		cout << "\nEnter 1:Study credit program . Enter 2: Study model program"<<endl ;
		cin >> CHECK;
		if (CHECK == 1) {
			cout << "\nHow many credit ?"<<endl ;
			cin >> CREDIT;
			v1.push_back(std::unique_ptr<Student>(new Credit_program(NAME, ID, COURSE, CHECK, CREDIT)));
		}
		else if (CHECK == 2) {
			cout << "\nGPA ?"<<endl ;
			cin >> GPA;
			v1.push_back(std::unique_ptr<Student>(new Model_program(NAME, ID, COURSE, CHECK, GPA)));
		}
	
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
	cout << "\nWhat information do you want to edit ?" << endl;
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
	int k; // sinh viên thứ k
	string newname;
	int newid;
	int newcourse;
	double newgpa;
	int new_number_of_credit;
	vector<std::unique_ptr<Student>>v;
	input();
	while (true) {
		cin >> choose;
		switch (choose) {
		case 1:
		{
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
		}
		case 4:
		{
			cout << "Search student information by ID ";
			int id1;
			cin >> id1;
			for (int i = 0; i < v.size(); i++) {
				if (id1 == v.at(i)->getId()) {
					cout << "\nThe information student "<<(i+1)<<" by ID " << endl;
					v.at(i)->display();
				}
				/*else {
					cout << "Not found" << endl;
					cout << "Request re-entry " << endl;
					goto ID1;
				}*/
			}input();
			break;
		}
		case 5:
		{
			cout << " Search student information by Name ";
			cin.ignore();
			string name1;
			getline(cin, name1);
			for (int i = 0; i < v.size(); i++) {
				if (name1 == v.at(i)->getName()) {
					cout << "\nThe information student "<<(i+1)<<" by NAME " << endl;
					v.at(i)->display();
				}
				/*else {
					cout << "Not found " << endl;
					cout << "Request re-entry " << endl;
					goto NAME1;
				}*/
			}
			input();
			break;
		}
		case 6:
		{
			cout << "6: Search student information by course";
			int course1;
			cin >> course1;
			for (int i = 0; i < v.size(); i++) {
				if (course1 == v.at(i)->getCourse()) {
					cout << "\nThe information "<<(i+1)<<" by Course" << endl;
					v.at(i)->display();
				}
			}
			input();
			break;
		}
		case 2: {
			cout << "2: Fix student information " << endl;
			for (int i = 0; i < v.size(); i++) {
				cout << "The information of student " << (i + 1) << " :" << endl;
				v.at(i)->display();
			}
			fixing();
			cout << "\nSelect the information of student you want to edit " << endl;
			cin >> fix;
			if(fix==1){
					cout << "Select the student you want to change the name ";
					cin >> k;
					while (k <= 0) {
						cout << "Please input a positive numeric data! \n";
						cin.clear(); // reset failed bit
						cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
						cin >> k;
					}
					cout << "\nEnter new name for student ";
					cin.ignore();
					getline(cin, newname);
					v.at(k - 1)->setName(newname);
					cout << "New information of student : " << endl;
					v.at(k - 1)->display();
					input();
				}
			}
			  if (fix == 2) {
				  cout << "Select the student you want to change the ID ";
				  cin >> k;
				  while (k <= 0) {
					  cout << "Please input a positive numeric data! \n";
					  cin.clear(); // reset failed bit
					  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
					  cin >> k;
				  }
				  cout << "\nEnter new ID for student ";
				  cin.ignore();
				  cin >> newid;
				  v.at(k - 1)->setId(newid);
				  cout << "New information of student : " << endl;
				  v.at(k - 1)->display();
				  input();
			  }
			  if (fix == 3) {
				  cout << "Select the student you want to change the COURSE ";
				  cin >> k;
				  while (k <= 0) {
					  cout << "Please input a positive numeric data! \n";
					  cin.clear(); // reset failed bit
					  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
					  cin >> k;
				  }
				  cout << "\nEnter new COURSE for student ";
				  cin.ignore();
				  cin >> newcourse;
				  v.at(k - 1)->setCourse(newcourse);
				  cout << "New information of student : " << endl;
				  v.at(k - 1)->display();
				  input();
			  }
			  if (fix == 4) {
				  cout << "Select the student you want to change the GPA ";
				  cin >> k;
				  while (k <= 0) {
					  cout << "Please input a positive numeric data! \n";
					  cin.clear(); // reset failed bit
					  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
					  cin >> k;
				  }
				  cout << "\nEnter new COURSE for student ";
				  cin.ignore();
				  cin >> newgpa;
				  v.at(k - 1)->setCourse(newcourse);
				  cout << "New information of student : " << endl;
				  v.at(k - 1)->display();
				  input();
			  }
		}
		/*case 9:
		{
			exit(0);
		}*/
		}
	}



