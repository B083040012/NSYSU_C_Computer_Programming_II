#ifndef cre_cpp
#define cre_cpp
#include"creditpayment.h"
#include"payment.cpp"
namespace pay{
	creditcardpayment::creditcardpayment(){};
	creditcardpayment::creditcardpayment(float m,string n,int* d,int u):payment(m),name(n),number(u){
		for(int i=0;i<3;i++) date[i]=d[i];
	};
	void creditcardpayment::paymentdetails(){
		cout << "The credit payment amount is: " << money << "\nThe name on the credit card is: " << name << endl;
		cout << "The expiration date is: "<< date[0] << "/" << date[1] << "/" << date[2] << endl;
		cout << "The credit card number is: " << number << endl;
	}
}
#endif
