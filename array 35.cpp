#include<iostream>
using namespace std;
int main() {
	int arr[12];
	cout << "enter 12 numbers";
	for (int i = 0; i < 12; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i ++) {
		if (arr[i] < arr[i + 1] && arr[i + 1] < arr[i + 2]) {
			cout << arr[i + 1] << i + 1;
		}
	}
	system("pause");
}