#ifndef cashpay_cpp
#define cashpay_cpp
#include"cashpayment.h"
#include"payment.cpp"
namespace pay{
	cashpayment::cashpayment(){};
	cashpayment::cashpayment(float m):payment(m){};
	void cashpayment::paymentdetail(){
		cout << "The cash payment amount is " << money;
	}
}
#endif
