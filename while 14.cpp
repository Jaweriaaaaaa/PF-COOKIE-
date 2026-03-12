#include<iostream>
using namespace std;
int main() {
	int n = 0;
	bool iseven = false;
	while (n != -1) {
		cout << "enter numbers";
		cin >> n;
		if (n % 2 == 0) {
			iseven = true;
			break;
		}

	}
	if (iseven = true) {
		cout << "even number found";
	}
	system("pause");
}