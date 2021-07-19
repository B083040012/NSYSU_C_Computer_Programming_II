#ifndef stu_cpp
#define stu_cpp
#include"student.h"
#include"universitystaff.h"
#include"universitystaff.cpp"
namespace studata{
	student::student(){};
	student::student(string uniname,int regis,string name):universityname(uniname),regisnum(regis){
		proctor=universitystaff(name);
	}
	student::student(const student& rtstu){
		proctor=universitystaff(rtstu.proctor);
		universityname=rtstu.universityname;
		regisnum=rtstu.regisnum;
	}
	string student::getuniversityname() const{
		return universityname;
	}
	int student::getregisnum() const{
		return regisnum;
	}
	string student::getstuname() const{
		proctor.getname();
	}
	student& student::operator = (const student& rtstu){
		universityname=rtstu.universityname;
		regisnum=rtstu.regisnum;
		proctor=rtstu.proctor;
		return *this;
	}
	istream& operator >> (istream& instream,student& rtstu){
		cout << "Enter the university's name : ";
		instream >> rtstu.universityname;
		cout << "Enter the registration number : ";
		instream >> rtstu.regisnum;
		//cin >> proctor;
		return instream;
	}
	ostream& operator << (ostream& outstream,const student& rtstu){
		outstream << rtstu.getuniversityname() << endl;
		outstream << rtstu.getregisnum() << endl;
		outstream << rtstu.proctor << endl;
		return outstream;
	}
}
#endif
