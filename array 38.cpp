#include<iostream>
using namespace std;
int main() {
	int arr[6];
	cout << "enter 6 numbers";
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 6; i++) {
		int count = 0;
		for (int j = 0; j < 6; j++) {

			if (arr[i] = arr[j]) {
				count++;
				
			}
		}
		if (count == 1) {
			cout << arr[i];


		}
	}
	
	system("pause");
}