#include<string.h>
using namespace std;
class bank{
	private:
		string accountNumber;
		string accountHolder;
		double  balance;
		double overDraftLimit;
	public:
		bank();
		bank(string,string,double,double);
		void deposit(double);
	    void withdraw(double);
		void showBalance();
		bool checkOverdraft(double);		
};