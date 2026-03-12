#include<iostream>
using namespace std;
int main() {
	char ch;
	cout << "enter a characater";
	cin >> ch;
	if (ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u') {
		cout << "vowel";
	}
	else {
		cout << "consonent";
	}
	system("pause");
}