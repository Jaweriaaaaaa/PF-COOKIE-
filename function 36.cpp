#include<iostream>
using namespace std;
void pp(int rows,int col) {
	int num = 2;
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= col; j++) {
			cout << num;
			num += 2;
	
			
		}
		cout << endl;

	}
}
int main() {
	int r,  c;
	cout << "enter number of rows and col";
	cin >> r >> c;

	pp(r,c);
	system("pause");



}