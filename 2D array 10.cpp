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
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i != j && arr[i][j] == 0) {
				cout << "it is a diagnol matrix";
			}
			else {
				cout << "it is not a diagnol matrix";
			}
		}
	}
	system("pause");
}