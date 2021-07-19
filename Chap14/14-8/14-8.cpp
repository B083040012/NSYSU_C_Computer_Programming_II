#include<iostream>
#include"owner.cpp"
using namespace std;
using namespace blog;

int main(){
	owner admis;
	cout << "First, enter data as the owner\n";
	admis.menu();
	cout << "Access data as Viewer\n";
	admis.viewer::menu();
}
