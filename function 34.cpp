#include<iostream>
using namespace std;
void rect(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
				cout << "1";
			}
			else {
				cout << "0";
			}

			
		}
		cout << endl;
		
	}
}
int main() {
	int num;
	cout << "enter size";
	cin >> num;
	rect(num);
	system("pause");
}