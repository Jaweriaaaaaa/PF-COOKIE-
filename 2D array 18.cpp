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
	for (int j = 0; j < 3; j++) {
		int average = 0;
		int sum = 0;
		for (int i = 0; i < 3; i++) {
			sum += arr[i][j];
			average = sum / 3;
		}
		cout << "col" << j + 1 << "have sum:" << sum << "and average" << average;
	}
	system("pause");

}