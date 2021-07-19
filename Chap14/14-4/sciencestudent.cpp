#ifndef scistu_cpp
#define scistu_cpp
#include"sciencestudent.h"
#include"student.cpp"
#include<iostream>
using namespace std;
namespace studata{
	sciencestudent::sciencestudent(){};
	sciencestudent::sciencestudent(string uniname,int regis,string name,string dis,string cour):student(uniname,regis,name),discipline(dis),course(cour){};
	sciencestudent::sciencestudent(const sciencestudent& s1):student(s1){
		discipline=s1.discipline;
		course=s1.course;
	}
	string sciencestudent::getdis() const{
		return discipline;
	}
	string sciencestudent::getcourse() const{
		return course;
	}
	sciencestudent& sciencestudent::operator = (const sciencestudent& s1){
		student::operator = (s1);
		discipline=s1.discipline;
		course=s1.course;
		return *this;
	}
	istream& operator >> (istream& in,sciencestudent& s1){
		//student::operator >> (in,s1);
		in >> s1.discipline >> s1.course;
		return in;
	}
	ostream& operator << (ostream& out,const sciencestudent& s1){
		//student::operator << (out,s1);
		out << s1.universityname << endl << s1.regisnum << endl << s1.proctor;
		out << s1.discipline << endl << s1.course << endl;
		return out;
	}
}
#endif
