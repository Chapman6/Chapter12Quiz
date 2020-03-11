#include "ID.h"
#include<string>
#include<iostream>
using namespace std;

ID::ID()
{
	first = " ";
	last = " ";
	id = 0;
	birthYear = 0;
	birthMonth = 0;
	birthDay = 0;
}

ID::ID(string firstName, string lastName, int idNumber, int year, int month, int day)
{
	first = firstName;
	last = lastName;
	id = idNumber;
	birthYear = year;
	birthMonth = month;
	birthDay = day;
}

void ID::printID()
{
	cout << first << " " << last << endl;
	cout << "ID Number: " << id;
	cout << "Date of Birth: " << birthMonth << " - " << birthDay << " - " << birthYear << endl;
}

ID::~ID() {}