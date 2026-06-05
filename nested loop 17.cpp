#include<iostream>
using namespace std;
int main() {
	int houses;
	cout << "enter number of houses";
	cin >> houses;
	int months;
	cout << "enter number of months";
	cin >> months;
	for (int i = 1; i <= houses; i++) {
		cout << "house" << i;
		int bill = 0;
		int totalbill = 0;
		for (int j = 1; j <= months; j++) {
			cout << "months" << j << endl;
			int units;
			
			cout << "enter number of units ";
			cin >> units;
			if (units <= 100) {
				bill = units * 5;	
			}
			else if (units > 100 || units <= 200) {
				bill = (units * 5) + (units - 100) * 10;
			}
			totalbill += bill;



		}

		cout << "house" << i << endl;
		cout << "totabill" << totalbill << endl;
	}
	system("pause");
}