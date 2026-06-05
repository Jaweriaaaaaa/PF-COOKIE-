#include<iostream>
using namespace std;
void grid(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int product = i * j;
			cout << product;

		}
		cout << endl;
	}
}
int main() {
	int num;
	cout << "enter size";
	cin >> num;
	grid(num);
	system("pause");
}