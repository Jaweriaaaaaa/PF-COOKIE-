#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "enter a number";
	cin >> n;
	int digit = 0;
	int largest = 0;
	while (n > 0) {
		digit = n % 10;
		n = n / 10;
		if (digit > largest) {
			largest = digit;

		}

	}
	cout << largest;
	system("pause");
}