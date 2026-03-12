#include<iostream>
using namespace std;
int main() {
	int units;
	cout << "enter units";
	cin >> units;
	if (units < 100) {
		cout << "low usage";

	}
	else if (units > 100 && units <= 300) {
		cout << "medium usage";
	}
	else if (units > 300) {
		cout << "high usage";
	}
	system("pause");
}