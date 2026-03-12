#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "enter number 1 and 2";
	cin >> a >> b;
	if (a > b) {
		cout << "a is greater";
	}
	else if (b > a) {
		cout << "b is greater ";
	}
	system("pause");
}