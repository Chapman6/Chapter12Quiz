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
		string courseName = course::setCourse();
		cout << "Course: " << courseName << endl;
		switch courseName
		{
		case "algebra":
			cout << "The instructor is Mr. Math." << endl;
			break;
		case "biology":
			cout << "The instructor is Mrs. Biology." << endl;
			break;
		case "calculus":
			cout << "The instructor is Dr. Math." << endl;
			break;
		case "diving":
			cout << "The instructor is Dr. Diving." << endl;
			break;
		case "english":
			cout << "The instructor is Mr. Janke." << endl;
			break;
		case "greek":
			cout << "The instructor is Mr. Greek." << endl;
			break;
		case "latin":
			cout << "The instructor is Ms. Latin." << endl;
			break;
		case "metaphysics":
			cout << "The instructor is Dr. Philosophy." << endl;
			break;
		case "physics":
			cout << "The instructor is Mrs. Physics." << endl;
			break;
		case "soccer":
			cout << "The instructor is Chapman." << endl;
			break;
		default:
			cout << "The instructor is Mr. Lowe." << endl;
		}
		setGrades();
		i++;
	}
}

void student::setGrades()
{
	cout << "Please enter your grades." << endl;
	int i;
	float a, average;
	cin >> a;
	for (i = 0; i < 10; i++)
	{
		cout << "Grade on assignment " << i << ": " << a << endl;
		grades[0][i] = a;
		average += a;
		cin >> a;
	}
	cout << "Average grade: " << average / 10 << endl;
}

student::~student() {}