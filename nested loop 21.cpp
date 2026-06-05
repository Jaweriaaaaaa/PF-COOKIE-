#include<iostream>
using namespace std;
int main() {
	int rows;
	cout << "enter number of rows";
	cin >> rows;
	for (int i = 1; i <= rows; i++) {
		cout << "row" << i << endl;
		int seats;
		cout << "enter number of seats";
		cin >> seats;

		for (int j = 1; j <= seats; j++){
			int status;
			cout << "enter status of seat";
			cin >> status;
			if (status == 1) {
				cout << 'b';
			}
			else {
				cout << 'a';

			}
		}
		cout << endl;
	}


	system("pause");
}