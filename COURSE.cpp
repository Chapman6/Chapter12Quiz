#include "COURSE.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

course::course()
{
	courseName = " ";
}

string course::setCourse();
{
	char courseName;
	cout << "Please enter the first letter of the course you would like to take. The options are algebra, biology," << endl;
	cout << "calculus, diving, english, greek, latin, metaphysics, physics, or soccer." << endl;
	cin >> courseName;
	switch tolower(courseName)
	{
	case 'a':
		return "algebra";
		break;
	case 'b':
		return "biology";
		break;
	case 'c':
		return "calculus";
		break;
	case 'd':
		return "diving";
		break;
	case 'e':
		return "english";
		break;
	case 'g':
		return "greek";
		break;
	case 'l':
		return "latin";
		break;
	case 'm':
		return "metaphysics";
		break;
	case 'p':
		return "physics";
		break;
	case 's':
		return "soccer";
		break;
	default:
		cout << "That course is not offered. Please enter another course." << endl;
		cin >> courseName;
	}
}

course::~course() {}