#ifndef payment_cpp
#define payment_cpp
#include"payment.h"
#include<iostream>
namespace pay{
	using namespace std;
	payment::payment(){};
	payment::payment(float m):money(m){};
	float payment::getmoney() const{
		return money;
	}
	void payment::paymentdetails(){
		cout << "The payment amount is " << money;
	}
}
#endif


