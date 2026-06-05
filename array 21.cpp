#include<iostream>
using namespace std;
int main() {
	int arr[5];
	int size = 5;
	int k;
	cout << "enter number of rotation";
	cin >> k;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];

	}
	int temp = arr[0];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < k; j++) {
			arr[i] = arr[i + 1];
	}
	}
	temp = arr[size - 1];
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
	system("pause");


}