#include"cashpayment.cpp"
#include"creditpayment.cpp"
#include<iostream>
using namespace std;
using namespace pay;

int main(){
	cashpayment c1(50.5),c2(20.45);
	cout << "Cash 1 details: \n";
	c1.paymentdetails();
	cout << "\n\nCash 2 details: \n";
	c2.paymentdetails();
	int date1[3],date2[3];
	date1[0]=10;
	date1[1]=5;
	date1[2]=2010;
	date2[0]=11;
	date2[1]=15;
	date2[2]=2009;
	creditcardpayment r1(10.5,"Fred",date1,123456789),r2(100,"Barney",date2,987654321);
	cout << "\n\nCredit 1 details: \n";
	r1.paymentdetails();
	cout << "\nCredit 2 details: \n";
	r2.paymentdetails();
}
