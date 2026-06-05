#include<iostream>
using namespace std;
void sum(int n) {
	int sum = 0;
	int count = 0;
	int digit = 0;
	while (n > 0) {
		digit = n % 10;
		if (digit % 2 == 0) {
			count++;
			sum = sum + digit;
		}
		n = n / 10;
	}
	cout << "sum is:" << sum;
	cout << "count is:" << count;
}

int main() {
	int num;
	cout << "enter a number";
	cin >> num;
	sum(num);
	system("pause");
}