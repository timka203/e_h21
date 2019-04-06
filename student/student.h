#pragma once
#include<iostream>;
using namespace std;
class student
{
	char*name;
	char*university;
public:
	student();
	student(const char* s, const char* u);
	void setName(const char* s);
	void setUniversity(const char* s);
	const char * getName();
	const char* getUniversity();
	void print();
	~student();
};

