#include<iostream>;
using namespace std;
int main() {
	int n;
	cout << "enter a number";
	cin >> n;
	if (n % 2 == 0 && n > 10) {
		cout << "number is valid";
	}
	else {
		cout << "invalid";
	}
	system("pause");
}