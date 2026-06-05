#include<iostream>
using namespace std;
int main() {
	int arr[5];
	int num = 5;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i] == num) {
			num == arr[i];
			cout << "number search succeful";
		}
		else {
			cout << "number not found";
		}
	}
	system("pause");
}