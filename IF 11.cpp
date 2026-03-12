#include<iostream>
using namespace std;
int main() {
	char op;
	cout << "enter operation";
	cin >> op;
	int n1, n2;
	cout << "enter number 1 and 2";
	cin >> n1 >> n2;
	if (op == '+') {
		int sum = n1 + n2;
		cout << "sum is:" << sum;
	}
	else if (op == '-') {
		int diff = n1 - n2;
		cout << "diff is :" << diff;

	}
	else if (op == '*') {
		int mul = n1 * n2;
		cout << "mu is:" << mul;
	}
	else if (op == '/') {
		if (n2 == 0) {
			cout << "division not possible";
		}
		int div =n1 / n2;
		cout << "div is:" << div;
	}
	system("pause");

}