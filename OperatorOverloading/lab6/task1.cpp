
#include<iostream>
#include"task1.h"
using namespace std;
 testing::testing(){
	a=10;
}
void testing::operator ++(){
	a++;
}
void testing::operator --(){
	a--;
}
void testing::display(){
	cout<<"\nThe value is="<<a;
}