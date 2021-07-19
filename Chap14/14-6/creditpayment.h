#ifndef cre_h
#define cre_h
#include<iostream>
#include"payment.h"
namespace pay{
	using namespace std;
	class creditcardpayment:public payment{
		private:
			string name;
			int number,date[3];
		public:
			creditcardpayment();
			creditcardpayment(float,string,int*,int);
			void paymentdetails();
	};
}
#endif
