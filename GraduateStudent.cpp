#include "GraduateStudent.h"

GraduateStudent::GraduateStudent()
{
	SetName("");
	SetCourse(1);
	SetIDnumber(0);
	SetThesisTopic("");
}
GraduateStudent::GraduateStudent(string ThesisTopic = "", const char* name = "",
	int course = 0, int IDnumber = 0)
{
	SetThesisTopic(ThesisTopic);
	SetName(name);
	SetCourse(course);
	SetIDnumber(IDnumber);
}

GraduateStudent::~GraduateStudent() {}

void GraduateStudent::SetThesisTopic(string ThesisTopic)
{
	this->ThesisTopic = ThesisTopic;
}
void GraduateStudent::SetIDnumber(int IDnumber)
{
	Student::SetIDnumber(IDnumber);
}
string GraduateStudent::GetThesisTopic() const { return ThesisTopic; }

GraduateStudent::operator string() const
{
	stringstream ss;
	ss << "Student's topic of thesis: " << GetThesisTopic() << endl;
	ss << "Student's name: " << GetName() << endl;
	ss << "Student's course: " << GetCourse() << endl;
	ss << "Student's IDnumber: " << GetIDnumber() << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const GraduateStudent& A)
{
	out << string(A);
	return out;
}