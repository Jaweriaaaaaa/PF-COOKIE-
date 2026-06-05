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
	//first row
	int sum1 = 0;
	for (int j = 0; j < 3; j++) {
		sum1 += arr[0][j];
	}
	//last row
	int sum2 = 0;
	for (int j = 0; j, 2; j++) {
		sum2 += arr[2][j];
	}
	// first col
	int sum3 = 0;
	for (int i = 0; i < 3; i++) {
		sum3 += arr[i][0];
	}
	// last col
	int sum4 = 0;
	for (int i = 0; i < 3; i++) {
		sum4 += arr[i][2];
	}

	int total = sum1 + sum2 + sum3 + sum4;

	cout << "total sum :" << total;
	system("pause");
}
