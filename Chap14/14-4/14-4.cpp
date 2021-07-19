#include<iostream>
#include"sciencestudent.cpp"
using namespace std;
using namespace studata;

int main(){
	student s1("NSYSU",123456789,"John"),s2;
	cout << "Student Test1(constructed) Data:\n" << s1;
	s2=s1;
	cout << "Student Test2(assigned) Data:\n" << s2;
	s2=student(s1);
	cout << "Student Test2(copy constructed) Data:\n" << s2;
	sciencestudent c1("NTU",987654321,"Curry","Math","undergraduate"),c2;
	cout << "Sciencestudent Test1(constructed) Data:\n" << c1;
	c2=c1;
	cout << "\nSciencestudent Test2(assigned) Data:\n" << c2;
	c2=sciencestudent(c1);
	cout << "\nSciencestudent Test2(copy constructed) Data:\n" << c2;
}

