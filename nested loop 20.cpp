#include<iostream>
using namespace std;
int main() {
	int users;
	cout << "enter number of users";
	cin >> users;
	int guess = 7;
	for (int i = 1; i <= users; i++) {
		cout << "user" << i << endl;
		while (true) {
			int n;
			cout << "enter number";
			cin >> n;
			if (n > guess) {
				cout << "too high" << endl;

			}
			else if (n < guess) {
				cout << "too low" << endl;

			}
			else if (n == guess) {
				cout << "correct guess";
				break;
			}
		}
	}
	system("pause");
}