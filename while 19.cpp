#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "enter a number";
	cin >> n;
	int reverse = 0;
	int digit = 0;
	int temp = n;
	while (temp > 0) {
		digit = temp % 10;
		reverse = (reverse * 10) + digit;
		temp = temp / 10;
		


	}
	if (n == reverse) {
		cout << "palindrome";
	}
	else {
		cout << "not a palindrome";
	}

	system("pause");
}