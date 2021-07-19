#ifndef payment_h
#define payment_h
namespace pay{
	class payment{
		protected:
			float money;
		public:
			payment();
			payment(float);
			float getmoney() const;
			void paymentdetails();
	};
}
#endif
