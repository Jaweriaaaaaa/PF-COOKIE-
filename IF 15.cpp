#include<iostream>
using namespace std;
int main() {
	int age;
	cout << "enter age";
	cin >> age;
	if (age > 0 && age < 12) {
		cout << "kid";

	}
	else if (age >= 13 && age < 19) {
		cout << "teenager";

	}
	else if (age >= 20 && age <= 59) {
		cout << "adult";
	}
	else if (age >= 60) {
		cout << "senior";
	}
	system("pause");
}