#include<iostream>
using namespace std;
int main() {
	int arr_a[8];
	cout << "enter 8 numbers";
	for (int i = 0; i < 8; i++) {
		cin >> arr_a[i];
	}
	int arr_b[8];
	for (int j = 0; j < 8; j++) {
		cin >> arr_b[j];
	}

	for (int i = 0; i < 8; i++) {
		bool already_printed = false;
		for (int k = 0; k < i; k++) {
			if (arr_a[i] == arr_a[k]) {
				already_printed = true;
			}

		}
		if (already_printed) {
			continue;
		}
		for (int j = 0; j < 8; j++) {
			if (arr_a[i] == arr_b[j]) {
				cout << arr_a[i];
			}
		}
	}
	system("pause");
}