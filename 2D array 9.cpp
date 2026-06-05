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
	int sum = 0;
	int n = 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int index = i + j;
			if (index= n - 1) {
				sum += arr[i][j];

			}
		}
	}
	cout << "sum of secondary diagnol is:" << sum;
	system("pause");
}