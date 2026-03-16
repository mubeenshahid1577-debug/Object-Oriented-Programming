#include "header.h"
#include <iostream>
using namespace std;
testing::testing():a(0){}
void testing::incre(){
		count++;
			a++;
			}
void testing::display(){
				cout<<"\ncount="<<count;
			}
int testing::count=0;