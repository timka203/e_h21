#include "student.h"



student::student()
{
	university = nullptr;
	name = nullptr;
}

student::student(const char * s, const char * u)
{
	name = new char[strlen(s) + 1];
	strcpy_s(name, strlen(s) + 1,s);
	university = new char[strlen(u) + 1];
	strcpy_s(name, strlen(u) + 1, u);
}

void student::setName(const char * s)
{
	name = new char[strlen(s) + 1];
	strcpy_s(name, strlen(s) + 1, s);
}

void student::setUniversity(const char * s)
{
	university = new char[strlen(s) + 1];
	strcpy_s(university, strlen(s) + 1, s);
}

const char * student::getName()
{
	return name;
}

const char * student::getUniversity()
{
	return  university;
}

void student::print()
{
	cout << name << " study in " << university << endl;
}
student::~student()
{
	delete[] name;
	delete[] university;
}
