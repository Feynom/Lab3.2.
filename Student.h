#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Student
{
private:
	const char* name;
	int course,
		IDnumber;
public:

	void SetName(const char*);
	void SetCourse(int);
	void SetIDnumber(int);

	const char* GetName() const;
	int GetCourse() const;
	int GetIDnumber() const;

	Student();
	Student(const char*, int, int);
	Student(const Student&);
	
	~Student();

	operator string() const;
	friend ostream& operator << (ostream&, const Student&);
	friend istream& operator >> (istream&, Student&);
};

