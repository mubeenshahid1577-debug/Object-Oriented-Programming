#include"task3.h"
#include<iostream>
using namespace std;
compare::compare(int n){
	a=n;
}
bool compare::operator <(compare obj){
	if (a<obj.a)
	return true;
	else 
	return false;
}
void compare::display(){
	cout<<a;
}