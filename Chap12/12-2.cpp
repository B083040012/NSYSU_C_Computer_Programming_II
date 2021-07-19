#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream read;
	string file;
	double num,sum,i;
	while(1){
		sum=i=0;
		cout << "Enter the file name : ";
		cin >> file;
		read.open(file+".txt");
		if(read.fail()) break;
		while(!read.eof()){
			read >> num;
			sum+=num;
			i++;
		}
		read.close();
		cout << "Average of " << i << " numbers is " << sum/i << endl;
	}
}
