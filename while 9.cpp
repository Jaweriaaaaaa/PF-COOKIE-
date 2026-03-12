#include<iostream>
using namespace std;
int main() {
	bool detected = false;
	int n = 1;
	while (n!=0) {
		cout << "enter numbers";
		cin >> n;
		if (n < 0) {
		 detected = true;
		}
	}
	if (detected == true) {
		cout << "negative number detected";
	}
	else {
		cout << "all numbers are positive";
	}
	system("pause");
}

