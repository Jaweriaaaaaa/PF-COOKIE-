#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "enter n";
	cin >> n;
	if (n % 3 == 0 && n % 7 == 0) {
		cout << "divisble by both";
	}
	else if (n % 3 == 0 && n % 7 != 0) {
		cout << "divisble by 3 only";
	}
	else if (n % 7 == 0 && n % 3 != 0) {
		cout << "divisble by 7 only";
	}
	else {
		cout<<"not divisble";
	}
	system("pause");

}