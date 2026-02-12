#include<iostream>
using namespace std;
//task# 1
/*
class testing {
	private:
		int a,b;
		public:
			void setdata(int x)
			{
				a=5;
				cout<<"enter b";
				cin>>b;
					}
					void getdata(){
						cout<<endl<<b<<endl;
							}
					 	int main(){
								testing obj;
								obj.setdata(5);
								obj.getdata();
								return 0;
							}
							
};
*/
//task# 2:
/*
#include <iostream>
#include "testing.h"
using namespace std;

int main() {
    testing t;
    t.set(10);
    cout << "Value = " << t.get();
    return 0;
}
*/
//task# 3
/*

class testing {
private:
    float x, y;
    char op;
    double res;

public:
    void input() {
        cout << "Enter first number: ";
        cin >> x;
        cout << "Enter operator (+ - * /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> y;
    }

    void eval() {
        switch(op) {
            case '+': res = x + y; break;
            case '-': res = x - y; break;
            case '*': res = x * y; break;
            case '/': res = x / y; break;
            default: cout << "Invalid operator"; 
        }
    }

    void disp() {
        cout << "Result = " << res << endl;
    }
};

int main() {
    testing t;
    char choice;

    do {
        t.input();
        t.eval();
        t.disp();

        cout << "Another operation? (y/n): ";
        cin >> choice;

    } while(choice == 'y');

    return 0;
}
*/


//task# 5
class taskOne {
private:
    int age;
    int salary;
    char name[25];

public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nSalary: " << salary << endl;
    }
};

int main() {
    taskOne obj1, obj2, obj3;

    obj1.getData();
    obj2.getData();
    obj3.getData();

    obj1.displayData();
    obj2.displayData();
    obj3.displayData();

    return 0;
}




