#ifndef owner_cpp
#define owner_cpp
#include"owner.h"
#include"viewer.cpp"
namespace blog{
	owner::owner():viewer(){};
	void owner::menu(){
		int func;
		while(1){
			cout << "\nMenu options:\n0> Exit\n1> Display all messages\n2> Post new messages\n3> Delete messages\nEnter command.\n";
			cin >> func;
			if(func==0) return;
			else if(func==1) display();
			else if(func==2){
				string mess;
				cout << "Enter new message\n";
				cin >> mess;
				post(mess);
			}
			else if(func==3){
				int index;
				cout << "Which message do you want to delete?\n";
				cin >> index;
				del(index);
			}
		}
	}
	void owner::post(string word){
		message.push_back(word);
	}
	void owner::del(int index){
		message.erase(message.begin()+index-1);
	}
}
#endif
