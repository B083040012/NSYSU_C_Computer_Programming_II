#ifndef unistaff_cpp
#define unistaff_cpp
#include"universitystaff.h"
#include<iostream>
using namespace std;
namespace studata{
	universitystaff::universitystaff(){};
	universitystaff::universitystaff(string thename):name(thename){};
	universitystaff::universitystaff(const universitystaff& theobject){
		name=theobject.name;
	}
	string universitystaff::getname() const{
		return name;
	}
	universitystaff& universitystaff::operator = (const universitystaff& rtside){
		name=rtside.name;
		return *this;
	}
	istream& operator >> (istream& instream,universitystaff& staffobject){
		cout << "Enter the Proctor's name : ";
		instream >> staffobject.name;
		return instream;
	}
	ostream& operator << (ostream& outstream,const universitystaff& staffobject){
		outstream << staffobject.name << endl;
		return outstream;
	}
};
#endif
