#include<iostream>
using namespace std;
int main() {
	string username = "admin";
	string user_name;
	cout << "enter username";
	cin >> user_name;
	if (user_name == username) {
		cout << "valid username";
	}

		int password = 123;
		int pass_key;
		cout << "enter passkey";
		cin >> pass_key;
	
		if (pass_key == password) {
			cout << "login successful";
		}
		else {
			cout << "login failed";
		}
	
	system("pause");
}