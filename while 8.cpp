#include<iostream>
using namespace std;
int main() {
	int i = 1;
	bool even = 0;

	while (i <= 5) {
		int n = 0;
		cout << "enter number";
		cin >> n;
		if (n % 2 == 0) {
			bool even = 1;
		}
		i++;
	}
	if (even = 1) {
		cout << "even found";
	}
	system("pause");
}