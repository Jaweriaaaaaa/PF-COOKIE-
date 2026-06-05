#include<iostream>
using namespace std;
void sq(int rows, int col) {
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= col; j++) {
			cout << "*";
		}
		cout << endl;
	}

	
}
void tri(int r) {
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
void pyramid(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = i; j > 1; j--) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	

	}
}
int main() {
	int choice;
	cout << "enter choice";
	cin >> choice;
	while (choice != 4) {
		if (choice == 1) {
			int ro, co;
			cout << "enter rows and coloums";
			cin >> ro >> co;

			sq(ro, co);
		}
		if (choice == 2) {
			int num;
			cout << "enter umn";
			cin >> num;
			tri(num);
		}
		if (choice == 3) {
			int number;
			cout << "enter number";
			cin >> number;
			pyramid(number);
		}
		if (choice == 4) {
			cout << "exit";
		}
		system("pause");
	}
}

