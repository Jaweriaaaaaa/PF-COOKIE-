#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "enter a number";
	cin >> n;
	int reverse = 0;
	int digit = 0;
	while (n > 0) {
		digit = n % 10;
		reverse = (reverse * 10) + digit;
		n = n / 10;
	

	}
	cout << reverse;
	system("pause");
}