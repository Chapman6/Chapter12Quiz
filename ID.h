#ifndef H_ID
#define H_ID
#include<string>
using namespace std;

class ID
{
public:
	ID();
	ID(string first, string last, int id, int birthYear, int birthMonth, int birthDay);
	void printID();
	~ID();
private:
	string first;
	string last;
	int id;
	int birthYear;
	int birthMonth;
	int birthDay;
};
#endif