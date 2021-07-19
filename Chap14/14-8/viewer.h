#ifndef viewer_h
#define viewer_h
#include<vector>
#include<iostream>
namespace blog{
	using namespace std;
	class viewer{
		protected:
			vector <string> message;
		public:
			viewer();
			void menu();
			void display();
	};
}
#endif
