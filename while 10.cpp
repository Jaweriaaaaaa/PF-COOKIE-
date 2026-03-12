#include<iostream>
using namespace std;
int main() {
	int passkey = 123;
	int count = 1;
	int password;
	while (count <= 3) {
		cout << "enter password";
		cin >> password;
		if (password == passkey) {
			cout << "login succfull";
			break;
		}
		
		count++;

	}
	if (count > 3) {
		cout << "account locked";
	}
	system("pause");
}