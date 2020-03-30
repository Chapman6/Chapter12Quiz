#ifndef H_student
#define H_student

#include <iostream>
#include <iomanip>
#include <string>
#include "ID.h"
#include "COURSE.h"

using namespace std;

const int noAssignments = 10;
const int noCourses = 10;

class student : protected ID, protected course
{
private:
	float grades[2][10];
	float gradeAvg1, gradeAvg2;
	/*struct courseInfo
	{
		course students[2][10];
		float grades[noAssignments];
	};
	courseInfo studentCourses[noCourses];
	*/
public:
	void print();//course name, student info, grade info
	//void getInfo();courses student is enrolled in
	void setGrades();
	void printGrades();
	student();
	~student();
};

#endif