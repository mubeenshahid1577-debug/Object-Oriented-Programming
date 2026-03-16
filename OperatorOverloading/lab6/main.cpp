#include <iostream>
#include"task1.h"
#include"task2.h"
#include"task3.h"
#include"task4.h"
using namespace std;
int main() {
	/*
	testing t1;
	t1.display();
	++t1;
	cout<<"\nAfter incrementation ";
	t1.display();
	--t1;
cout<<"\nAfter decrementation "	;
    t1.display();*/
    //task#2
   testings t1;
    t1.insert();
    cout<<"\nAfter decrement";
    --t1;
    t1.display();
   /* 
    //task#3
    compare obj(100),obj2(10);
    if (obj<obj2)
    cout<<"obj 2 is greater";
    else 
    cout<<"obj 1 is greater";


//task4
 add obj1,obj2,obj3;
 obj1.input();
 obj2.input();
 obj3=obj1+obj2;
 obj3.display();
 */
return 0;
}