#include<iostream>
using namespace std;
int main() {
	int customers;
	cout << "enter number of customers";
	cin >> customers;
	int items;
	cout << "enter number of items";
	cin >> items;
	int price;
	int totalbill = 0;
	int expensive = 0;
	
	for (int i = 1; i <= customers; i++) {
		int expensive = 0;
		int sum = 0;
		cout << "customer" << i << endl;
		for (int j = 1; j <= items; j++) {
			cout << "item" << j << endl;
			cout << "enter price of each item";
			cin >> price;
			if (price > 1000) {
				cout << "expensive" << endl;
				expensive++;
			}
			else if (price < 100) {
				cout << "cheap" << endl;
			}
			else {
				cout << "normal" << endl;
			}
			sum = sum + price;

		}
		totalbill = totalbill + sum;
		cout << "customer" << i << "totoalbill" << totalbill << endl;
		cout << "customer" << i << "expensive items" << expensive;
	}
	system("pause");

}