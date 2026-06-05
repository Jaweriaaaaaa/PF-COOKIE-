#include<iostream>
using namespace std;
int even(int n) {
	int digit = 0;
	while (n > 0) {
		digit = n % 10;
		if (digit % 2 == 0) {
			return digit;
		}
		else {
			return -1;
		}
	}
}
int main() {
	int num;
	cout << "enter a number";
	cin >> num;

	int result= even(num);
	cout << result;
	system("pause");
}