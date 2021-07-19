#ifndef stu_h
#define stu_h
#include"universitystaff.h"
#include"universitystaff.cpp"
namespace studata{
	class student{
		protected:
			string universityname;
			int regisnum;
			universitystaff proctor;
		public:
			student();
			student(string,int,string);
			student(const student&);
			string getuniversityname() const;
			int getregisnum() const;
			string getstuname() const;
			student& operator = (const student&);
			friend istream& operator >> (istream& ,student&);
			friend ostream& operator << (ostream& ,const student&);
	};
}
#endif
