#include<iostream>
using namespace std;
int main() {
	int cost_price, selling_price;
	cout << "enter cost and selling price";
	cin >> cost_price >> selling_price;
	if (cost_price > selling_price) {
		cout << "user bear losss";
	}
	else if (selling_price > cost_price) {
		cout << "user bear profit";
	}
	else if (selling_price == cost_price) {
		cout << "neither profit,nor loss";
	}
	system("pause");

}