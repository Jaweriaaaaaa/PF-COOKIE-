#include<iostream>
using namespace std;
void rect(int rows,int col) {
	int n = 1;
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= col; j++) {
			cout << n;
			n += 1;
		}
		cout << endl;
	}
}
int main() {
	int r, c;
	cout << "enter number of rows and coloums";
	cin >> r >> c;
	rect(r, c);
	system("pause");
	
}