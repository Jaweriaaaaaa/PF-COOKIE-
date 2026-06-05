#include<iostream>
using namespace std;
bool issorted(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] > arr[i + 1]) {
			return false;
	}
		else {
			return true;
		}
	}
}
int main() {
	int arr[5] = { 1,2,3,4,5 };
	if (issorted(arr, 5)) {
		cout << "sorted";
	}
	else {
		cout << "not sorted";
	}
	system("pause");
}
