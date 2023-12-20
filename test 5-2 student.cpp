#include <iostream>
#include "student.h"
void Student::display()
{
	std::cout << "num: " << num << std::endl;
	std::cout << "name: " << name << std::endl;
	std::cout << "sex: " << sex << std::endl;
}
void Student::set_value(int n, const char *name1, char s)
{
	num = n;
	strcpy_s(name, name1);
	sex = s;
}