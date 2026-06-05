#include<iostream>
using namespace std;
int main() {
	int users;
	cout << "enter number of users";
	cin >> users;
	cout << "menu of atm" << endl;
	cout << "1-withdraw" << endl;
	cout << "2-deposit" << endl;
	cout << "3-check balance" << endl;
	cout << "4-exit" << endl;
	for (int i = 1; i <= users; i++) {
		int balance;
		cout << "enter your balance";
		cin >> balance;
		for (int j = 1; j <= 4; j++) {
			int choice;
			cout << "enter your choice";
			cin >> choice;
			int withdrawlamount = 0;
			int depositamount;
			if (choice == 1) {
				cout << "enter amount to withdraw";
				cin >> withdrawlamount;
				if (withdrawlamount > balance) {
					cout << "insufficient balance";
				}
				

			}
			
			else if (choice == 2) {
				cout << "enter amount to deposit";
				cin >> depositamount;
				cout << "succeful deposit" << endl;
				balance = balance + depositamount;
			}
			else if (choice == 3) {
				cout << balance << endl;

			}
			else if (choice == 4) {
				cout << "exit" << endl;

			}
		}

	}
	system("pause");

}