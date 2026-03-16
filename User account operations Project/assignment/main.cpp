#include <iostream>
#include"task1.h"
#include"task2.h"
#include<string.h>
using namespace std;

int main(){

    // Creating two objects
    bank acc1("101", "Ali", 1000,300);
   bank acc2("102", "Sara", 500,400);

    int choice;
    double amount;

    do {
        cout << "\n--- Bank Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Show Balance\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                acc1.deposit(amount);
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                acc1.withdraw(amount);
                break;

            case 3:
                acc1.showBalance();
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 4);
	return 0;
}