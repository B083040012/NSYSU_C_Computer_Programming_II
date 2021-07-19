#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	ifstream read;
	ofstream write;
	string file,outfile;
	int temp=-1,input;
	cout << "Enter a file name :";
	cin >> file;
	outfile=file+"_out.txt";
	file=file+".txt";
	read.open(file.c_str());
	if(read.fail()){
		cout << "Error\n";
		return 0;
	}
	else{
		ofstream write;
		write.open(outfile.c_str());
		while(read >> input && input==temp+4){
			temp=input;
			write << input << "\n";
		}
		write.close();
		cout << "Build " << outfile << endl;
	}
	read.close();
}
