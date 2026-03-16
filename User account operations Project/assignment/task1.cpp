#include<iostream>
#include"task1.h"
#include<string.h>
using namespace std;
bank::bank(){
	accountNumber="000";
	accountHolder="no one";
	balance=0;
	overDraftLimit=0;
}
bank::bank(string a,string h,double b,double od ){
	accountHolder=a;
	accountNumber=h;
	balance=b;
	overDraftLimit=od;
}
bool bank::checkOverdraft(double amount){
	if (balance - amount < -overDraftLimit)
            return false;
        return true;
}
void bank::deposit(double amount){
	 balance += amount;
        cout << "Deposit successful.\n";
}
void bank::showBalance(){
	cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
}
void bank::withdraw(double amount ){
	if (checkOverdraft(amount)) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
        else {
            cout << "Withdrawal denied. Overdraft limit exceeded.\n";
        }
}