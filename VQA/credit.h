#include"Student.h"
class Credit_program : public Student
{
private:
	int credit;
public:
	void xuat();
	void nhap();
	string check();
	Credit_program();
	~Credit_program();
};