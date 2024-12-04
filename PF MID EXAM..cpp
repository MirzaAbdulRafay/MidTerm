#include <iostream>
using namespace std;

int main(){

	do{
	    float incomeAmount;
		float expenseAmount;
		int balance = 0;
		cout << "DISPLAY MENU" << endl;
		cout << "1.ADD INCOME" << endl;
	    cout << "2.ADD EXPENSE" << endl;
		cout << "3.VIEW BALANCE" << endl;
		cout << "4.EXIT" << endl;
		
		switch(balance){
			case 01:
		cout << "ADD AN INCOME AMMOUNT: ";
		cin >> incomeAmount;
		if (incomeAmount <= 0){
			cout << "INVALID AMOUNT ! PlEASE ENTER THE POSITIVE VALUE";
			continue;
		}
		cout << incomeAmount + balance;
		
		case 02:
		cout << "ADD AN EXPANSE AMOUNT: ";
		cin >> expenseAmount;
		if (expenseAmount <= 0){
			cout << "INVALID AMOUNT ! PlEASE ENTER THE POSITIVE VALUE";
			continue;
		}
		cout << expenseAmount - balance;
		
		case 03:
		cout << "CURRENT BALANCE: " << incomeAmount - expenseAmount; 	
			
		case 04:
		cout << "EXIT";
		break;			
	}
		
			}while(balance == 0);
	
	return 0;
}
