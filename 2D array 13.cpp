#include<iostream>
using namespace std;
int main() {
	int arr[3][3];
	cout << "enter elements of matrix";
	for (int i = 0; i< 3; i++) {
		for (int j = 0; j<3; j++) {
			cin >> arr[i][j];
		}
	}
	int count = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i < j) {
				cout << arr[i][j];
				count++;
			}
		}
	}
	cout << "count is:" << count;
	system("pause");
}