#ifndef owner_h
#define owner_h
#include"viewer.h"
#include<iostream>
namespace blog{
	//using namespace std;
	class owner:public viewer{
		public:
			owner();
			void menu();
			void post(string);
			void del(int);
	};
}
#endif
