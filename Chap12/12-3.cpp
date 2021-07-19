#include<iostream>
#include<cmath>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;

int main(){
	vector<int> score;
	int input;
	double median;
	ifstream read;
	string file;
	cout << "Enter a file name :\n";
	cin >> file;
	read.open(file+".txt");
	if(read.fail()){
		cout << "Error\n";
		return 0;
	}
	while(!read.eof()){
		if(!(read >> input)) break;
		score.push_back(input);
	}
	read.close();
	sort(score.begin(),score.end());
	cout << "Median number : ";
	if(score.size()%2==0){
		cout << score.size()/2 << ", " << score.size()/2+1; 
		cout << " Value : ";
		median=(score[score.size()/2-1]+score[score.size()/2])/2.0;
		cout << median << endl;
	}
	else{
		cout << ceil(score.size()/2.0);
		cout << " Value : ";
		median=score[score.size()/2];
		cout << median << endl;
	}
	cout << "Quartile : " << score[floor(score.size()/4.0)-1] << " " << median << " " << score[ceil(score.size()*3/4.0)-1] << endl;
}
