#include<iostream>
using namespace std;
void reverse(int arr[], int size) {
	for (int i = 4; i >= 0; i--) {
		cout << arr[i];
	}
}
int main() {
	int arr[5];
	cout << "enter 5 numbers";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	reverse(arr, 5);
	system("pause");
}