#include "ID.h"
#include "COURSE.h"
#include "student.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	student student1;
	student1.ID(Luke, Robson, 1, 2001, 11, 15);
	student1.print();
	student student2;
	student2.ID(Emmy, Hamilton, 2, 2002, 3, 6);
	student2.print();
	return 0;
}