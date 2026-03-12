#include<iostream>
using namespace std;
int main() {
	int marks, income;
	cout << "enter marks and income";
	cin >> marks >> income;
	if (marks >= 85) {
		if (income > 50000) {
			cout << "eligible for scholarship";
		}
		else {
			cout << "not eligible";
		}
	}
	system("pause");
}