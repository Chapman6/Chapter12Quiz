#include "COURSE.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

course::course()
{
	courseName = ' ';
}

void course::setCourse()
{
	cout << "Please enter the first letter of the course you would like to take. The options are algebra, biology," << endl;
	cout << "calculus, diving, english, greek, latin, metaphysics, physics, or soccer." << endl;
	cin >> courseName;
	switch (tolower(courseName))
	{
	case 'a':
		courseIdent = "algebra";
		break;
	case 'b':
		courseIdent = "biology";
		break;
	case 'c':
		courseIdent = "calculus";
		break;
	case 'd':
		courseIdent = "diving";
		break;
	case 'e':
		courseIdent = "english";
		break;
	case 'g':
		courseIdent = "greek";
		break;
	case 'l':
		courseIdent = "latin";
		break;
	case 'm':
		courseIdent = "metaphysics";
		break;
	case 'p':
		courseIdent = "physics";
		break;
	case 's':
		courseIdent = "soccer";
		break;
	default:
		cout << "That course is not offered. Please enter another course." << endl;
		cin >> courseName;
	}
}

course::~course()
{

}