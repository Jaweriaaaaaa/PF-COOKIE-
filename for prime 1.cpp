#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "enter a number";
	cin >> n;
	bool prime = true;
	if (n == 1){
		cout<<"1 is not a prime";
	}

	else {


		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				prime = false;
			}
		}
	}
	if (prime == true) {
		cout << "prime";
	}
	else {
		cout << "not prime";
	}
	system("pause");
}