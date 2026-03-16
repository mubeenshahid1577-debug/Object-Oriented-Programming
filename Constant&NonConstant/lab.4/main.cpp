#include <iostream>
#include "header.h"
#include"header2.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
/*int main(int argc, char** argv) {
	
	test obj(10,5);
	obj.display();
	int a=obj.getarea();
	cout<<"\nArea="<<a;

	return 0;
}
*/
int main(){
    testing const obj1;
	testing obj2;
	obj1.constant();
	//obj1.non_constant(); not allowed bcz a constant obj can call only a constant function but not a non constant function.
	obj2.constant();
	obj2.non_constant();
}