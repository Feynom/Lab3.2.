#include "Student.h"

void Student::SetName(const char* name) { this->name = name; }
void Student::SetCourse(int course) 
{ 
	if (course >= 1 && course <= 6) this->course = course;
	else { cout << "Error!!!" << endl; exit(1); }
	
}
void Student::SetIDnumber(int IDnumber) { this->IDnumber = IDnumber; }

const char* Student::GetName() const { return name; }
int Student::GetCourse() const { return course; }
int Student::GetIDnumber() const { return IDnumber; }

Student::Student()
{
	SetName("Default");
	SetCourse(1);
	SetIDnumber(0);
}
Student::Student(const char* name = "", int course = 0, int IDnumber = 0)
{
	SetName(name);
	SetCourse(course);
	SetIDnumber(IDnumber);
}
Student::Student(const Student& A)
{
	SetName(A.GetName());
	SetCourse(A.GetCourse());
	SetIDnumber(A.GetIDnumber());
}

Student::~Student() {}

Student::operator string() const
{
	stringstream ss;
	ss << "Student's name: " << GetName() << endl;
	ss << "Student's course: " << GetCourse() << endl;
	ss << "Student's IDnumber: " << GetIDnumber() << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Student& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Student& A)
{
	const char* name_tmp;
	string tmp;
	cout << "Enter student's name:"; getline(in, tmp); name_tmp = tmp.c_str();
	cout << "Enter student's course:"; in >> A.course;
	cout << "Enter student's IDnumber:"; in >> A.IDnumber;
	Student(name_tmp, A.course, A.IDnumber);
	return in;
}
