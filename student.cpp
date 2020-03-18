#include "student.h"
#include "COURSE.h"
#include "ID.h"
#include<iostream>
#include<iomanip>
using namespace std;

void student::print()
{
	float average;
	ID::printID();
	int i;
	for (i = 0; i < 10; i++)
	{
		cout << grades[i] << " ";
		average += grades[i];
	}
	cout << endl << "The average is " << average / 10 << endl;
	string courseName = course::setCourse();
	cout << "Course: " << courseName << endl;
}