#ifndef cashpayment_h
#define cashpayment_h
#include"payment.h"
namespace pay{
	class cashpayment:public payment{
		public:
			cashpayment();
			cashpayment(float);
			void paymentdetail();
	};
		
}
#endif
