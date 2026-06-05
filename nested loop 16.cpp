#include<iostream>
using namespace std;
int main() {
	int floors;
	cout << "enter number of floors";
	cin >> floors;
	int rooms;
	cout << "enter number of rooms";
	cin >> rooms;
	for (int i = 1; i <= floors; i++) {
		int cars = 0;
		cout << "floors" << i << endl;
		for (int j = 1; j <= rooms; j++) {
			cout << "rooms" << j << endl;
			int status;
			cout << "enter 0 or 1 ";
			cin >> status;
			if (status == 0) {
				cout << "empty";
			}
			else if (status == 1) {
				cars++;

			}
			
		}
		cout << "total cars:" << cars << endl;
	}
	system("pause");
}