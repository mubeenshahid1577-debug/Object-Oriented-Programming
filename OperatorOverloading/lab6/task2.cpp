#include<iostream>
#include"task2.h"
using namespace std;
testings::testings(){
	a=0;
}
void testings::insert(){
	cout<<"\nEnter value of a=";
	cin>>a;
}
void testings::display(){
		cout<<"\nThe value of a="<<a;
}
void testings::operator --(){
	a--;
}