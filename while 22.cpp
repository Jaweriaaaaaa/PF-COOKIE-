#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "enter a number";
	cin >> n;
	int count = 0;
	int digit = 0;
	while (n > 0) {
		digit = n % 10;
		if (digit % 2 != 0) {
			count++;
		}
		n = n / 10;
	}
	cout << count;
	system("pause");
}