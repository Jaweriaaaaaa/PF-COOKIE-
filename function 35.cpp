#include<iostream>
using namespace std;
void pattern(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << i;
		}
		cout << endl;

	}
}
int main() {
	int num;
	cout << "enter size";
	cin >> num;
	pattern(num);
	system("pause");
}