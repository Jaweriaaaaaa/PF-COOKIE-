#include<iostream>
using namespace std;
int main() {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		
	}
	if (arr[0] > arr[1] && arr[1] > arr[2] && arr[2] > arr[3] && arr[3] > arr[4]) {
		cout << "array is sorted";
	}
	else {
		cout << "array is not sorted";
	}
	system("pause");
}