 
#include<iostream>
using namespace std;

void xuat() {
	cout << "Enter request" << endl;
	cout << "1: Add student information" << endl;
	cout << "2: Fix student information" << endl;
	cout << "3: Delete student information" << endl;
	cout << "4: Search student information by ID" << endl;
	cout << "5: Search student information by Name" << endl;
	cout << "6: Search student information by course" << endl;
	cout << "7: Statistics of students studying according to the type of credit";
	cout << "8: Statistics of students studying according to the model program ";
	cout << "9: Exit";
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
	xuat();
}

