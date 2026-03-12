#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "enter a number";
	cin >> n;
	int product = 1;
	int digit = 0;
	int sum = 0;
	while (n > 0) {
		digit = n % 10;
		product = digit * digit * digit;
		sum = sum + product;
		n = n / 10;
	}
	cout << sum;
	system("pause");
}