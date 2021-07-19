#ifndef unistaff_h
#define unistaff_h
#include<iostream>
namespace studata{
	using namespace std;
	class universitystaff{
		private:
			string name;
		public:
			universitystaff();
			universitystaff(string thename);
			universitystaff(const universitystaff &theobject);
			string getname() const;
			universitystaff& operator = (const universitystaff &rtside);
			friend istream& operator >> (istream& instream,universitystaff& staffobject);
			friend ostream& operator << (ostream& outstream,const universitystaff& staffobject);
	};
}
#endif
