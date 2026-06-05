#include<iostream>
using namespace std;
bool check(int n) {
	int digit = 0;
	while (n > 0) {
		digit = n % 10;
		if (digit == 1 || digit == 3 || digit == 5) {
			return true;
		}
		else {
			return false;

		}
	}
}
int main() {
	int num;
	cout << "enter a number";
	cin >> num;
	int result =check(num);
	cout << result;
	system("pause");

}