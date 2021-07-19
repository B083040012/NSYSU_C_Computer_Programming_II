#ifndef viewer_cpp
#define viewer_cpp
#include"viewer.h"
#include<iostream>
namespace blog{
	using namespace std;
	viewer::viewer(){};
	void viewer::menu(){
		int func;
		while(1){
			cout << "\nMenu options:\n0> Exit\n1> Display all messages\n";
			cin >> func;
			if(func==0) return;
			else display();
		}
	}
	void viewer::display(){
		cout << "Message Posted : \n";
		for(int i=0;i<message.size();i++) cout << i+1 << ". " << message[i] << endl;
	}
}
#endif
