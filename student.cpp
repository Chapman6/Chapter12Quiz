#include "student.h"
#include "COURSE.h"
#include "ID.h"
#include<iostream>
#include<iomanip>
using namespace std;

student::student()
{
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 10; j++)
			grades[i][j] = 0;
	}
}

void student::print()
{
	ID::printID();
	int i = 0;
	while (i < 2)
	{
		cout << "Course: " << courseIdent << endl;
		switch (courseName)
		{
		case 'a':
			cout << "The instructor is Mr. Math." << endl;
			break;
		case 'b':
			cout << "The instructor is Mrs. Biology." << endl;
			break;
		case 'c':
			cout << "The instructor is Dr. Math." << endl;
			break;
		case 'd':
			cout << "The instructor is Dr. Diving." << endl;
			break;
		case 'e':
			cout << "The instructor is Mr. Janke." << endl;
			break;
		case 'g':
			cout << "The instructor is Mr. Greek." << endl;
			break;
		case 'l':
			cout << "The instructor is Ms. Latin." << endl;
			break;
		case 'm':
			cout << "The instructor is Dr. Philosophy." << endl;
			break;
		case 'p':
			cout << "The instructor is Mrs. Physics." << endl;
			break;
		case 's':
			cout << "The instructor is Chapman." << endl;
			break;
		default:
			cout << "The instructor is Mr. Lowe." << endl;
		}
		i++;
	}
	printGrades();
}

void student::setGrades()
{
	static int count = 0;
	while (count < 2)
	{
		cout << "Please enter your grades." << endl;
		int i;
		float a, average;
		cin >> a;
		for (i = 0; i < 10; i++)
		{
			cout << "Grade on assignment " << i << ": " << a << endl;
			grades[count][i] = a;
			average += a;
			if (i != 9)
				cin >> a;
		}
		if (count == 0)
		{
			gradeAvg1 = average / 10;
			cout << "Average grade: " << gradeAvg1 << endl;
		}
		else
		{
			gradeAvg2 = average / 10;
			cout << "Average grade: " << gradeAvg2 << endl;
		}
	}
}

void student::printGrades()
{
	for (int i = 0; i < 2; i++)
	{
		cout << "Grades: ";
		for (int j = 0; j < 10; j++)
			cout << grades[i][j] << " ";
		cout << endl;
		cout << "Grade Average: ";
		if (i == 0)
			cout << gradeAvg1;
		else
			cout << gradeAvg2;
		cout << endl;
	}
	cout << endl;
}

student::~student() 
{

}