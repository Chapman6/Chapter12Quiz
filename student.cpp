#include "student.h"
#include "COURSE.h"
#include "ID.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

student::student(string first, string last, int id, int birthYear, int birthMonth, int birthDay)
{
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 10; j++)
			grades[i][j] = 0;
	}
	obj1.setID(first, last, id, birthYear, birthMonth, birthDay);
}

/*void student::getID(string first, string last, int id, int birthYear, int birthMonth, int birthDay)
{
	obj1(first, last, id, birthYear, birthMonth, birthDay);
}*/

void student::print()
{
	obj1.printID();
	char answer;
	int i = 0;
	while (i < 2)
	{
		string courseName = obj.setCourse();
		cout << "Course: " << courseName << endl;
		switch (courseName[0])
		{
		case 'a':
			cout << "The instructor is Mr. Math." << endl;
			cout << "DOB: 1-13-42" << endl;
			cout << "ID: 3" << endl;
			break;
		case 'b':
			cout << "The instructor is Mrs. Biology." << endl;
			cout << "DOB: 1-25-87" << endl;
			cout << "ID: 4" << endl;
			break;
		case 'c':
			cout << "The instructor is Dr. Math." << endl;
			cout << "DOB: 3-13-800" << endl;
			cout << "ID: 5" << endl;
			break;
		case 'd':
			cout << "The instructor is Dr. Diving." << endl;
			cout << "DOB: 1-13-42" << endl;
			cout << "ID: 3" << endl;
			break;
		case 'e':
			cout << "The instructor is Mr. Janke." << endl;
			cout << "DOB: 1-13-42" << endl;
			cout << "ID: 3" << endl;
			break;
		case 'g':
			cout << "The instructor is Mr. Greek." << endl;
			break;
		case 'l':
			cout << "The instructor is Ms. Latin." << endl;
			cout << "DOB: 1-13-42" << endl;
			cout << "ID: 3" << endl;
			break;
		case 'm':
			cout << "The instructor is Dr. Philosophy." << endl;
			cout << "DOB: 1-13-42" << endl;
			cout << "ID: 3" << endl;
			break;
		case 'p':
			cout << "The instructor is Mrs. Physics." << endl;
			cout << "DOB: 1-13-42" << endl;
			cout << "ID: 3" << endl;
			break;
		case 's':
			cout << "The instructor is Chapman." << endl;
			cout << "DOB: 1-13-42" << endl;
			cout << "ID: 3" << endl;
			break;
		default:
			cout << "The instructor is Mr. Lowe." << endl;
			cout << "DOB: 1-13-42" << endl;
			cout << "ID: 3" << endl;
		}
		cout << "Would you like to enter another grade? If so enter y, if not, enter n." << endl;
		cin >> answer;
		while (answer != 'n')
		{
			setGrades();
			cout << "Would you like to enter another grade? If so enter y, if not, enter n." << endl;
			cin >> answer;
		}
		i++;
	}
}

void student::setGrades()
{
	cout << "Please enter a grade." << endl;
	int i=0;
	float a, average=0;
	cin >> a;
	cout << "Grade on assignment " << i+1 << ": " << a << endl;
	grades[0][i] = a;
	average += a/(i+1);
	cout << "Average grade: " << average << endl;
	cout << endl;
	i++;
}

student::~student() {}
