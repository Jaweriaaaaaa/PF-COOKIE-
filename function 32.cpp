#include<iostream>
using namespace std;
void multiplicationtable(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 10; j++) {
			int product = j * i;
			cout << product;
		}
		cout << endl;

	}
}
int main() {
	int num;
	cout << "enter a number";
	cin >> num;
	multiplicationtable(num);
	system("pause");
	
}