#include<iostream>
#include "student.h"
using namespace std;
void main()
{
	student d;
	d.setName("Timur Pashakulov");
	d.setUniversity("somewhere");
	cout << d.getName() << d.getUniversity() << endl;
	d.print();
	system("pause");
}