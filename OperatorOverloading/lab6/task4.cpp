#include<iostream>
#include"task4.h"
using namespace std;
void add::input(){
	cout<<"Enter complex number as real & imaginary part = ";
	cin>>r>>i;
	}
	add add::operator +(add obj){
		add obj1;
		obj1.r=r+obj.r;
		obj1.i=i+obj.i;
		return obj1;
	}
	void add::display(){
		cout<<"The complex number is ";
		cout<<r<<"+ "<<i<<"i"<<endl;
	}
