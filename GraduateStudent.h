#pragma once
#include "Student.h"

class GraduateStudent : public Student   
{
private:
	string ThesisTopic;
public:
	GraduateStudent();
	GraduateStudent(string, const char*, int, int);

	~GraduateStudent();

	void SetThesisTopic(string);
	void SetIDnumber(int);

	string GetThesisTopic() const;

	friend ostream& operator << (ostream&, const GraduateStudent&);
	operator string() const;


};

