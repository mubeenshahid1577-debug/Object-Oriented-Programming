#include"header.h"
#include<iostream>
using namespace std;
test::test(int a,int b):len(a),width(b){}
void test::display(){
	cout<<"\nlength="<<len;
	cout<<"\nwidth="<<width;
}
 int test::getarea() const {
	return len*width;
}