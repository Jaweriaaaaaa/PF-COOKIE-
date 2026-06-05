#include<iostream>
using namespace std;
int main() {
	int floors;
	cout << "enter number of floors";
	cin >> floors;
	int rooms;
	cout << "enter number of rooms";
	cin >> rooms;
	int status;
	int filled = 0;
	int empty = 0;
	int bookedrooms = 0;
	for (int i = 1; i <= floors; i++) {
		cout << "floor:" << i << endl;
		for (int j = 1; j <= rooms; j++) {
			cout << "room:" << j << endl;
			cout << "enter status";
			cin >> status;

			if (status == 1) {
				filled++;
					bookedrooms += filled;
			}
			else {
				empty++;
			}
		}
		cout << "floor:" << i << "bookedrooms" << bookedrooms << endl;

	}
	system("pause");

}