#ifndef scistu_h
#define scistu_h
#include"student.h"
namespace studata{
	class sciencestudent:public student{
		protected:
			string discipline,course;
		public:
			sciencestudent();
			sciencestudent(string,int,string,string,string);
			sciencestudent(const sciencestudent&);
			string getdis() const;
			string getcourse() const;
			sciencestudent& operator = (const sciencestudent&);
			friend istream& operator >> (istream&,sciencestudent&);
			friend ostream& operator << (ostream&,const sciencestudent&);
	};
}
#endif
