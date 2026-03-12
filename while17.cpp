#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "enter a number";
	cin >> n;
	int sum = 0;
	int digit = 0;
	while (n > 0) {
		digit = n % 10;
			sum = sum + digit;
			n = n / 10;
	}
	cout << sum;
	system("pause");
}