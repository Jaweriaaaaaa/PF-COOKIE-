#include<iostream>
using namespace std;
int main() {
	int arr[3][3];
	cout << "enter elements of matrix";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	int max = arr[0][0];
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3; i++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}
	cout << "in col max is:" << max;
	system("pause");
}