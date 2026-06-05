#include<iostream>
using namespace std;
int main() {
	int arr[6];
	cout << "enter 6 numbers";
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}
	bool already_counted = false;
	for (int i = 0; i < 6; i++) {
		for (int k = 0; k < 6; k++) {
			if (arr[i] == arr[k]) {


				already_counted = true;
				break;
			}

		}

		int count = 0;
		for (int j = 0; j < 6; j++) {
			if (arr[i] == arr[j]) {


				count++;
			}
			
		}
		cout << arr[i] <<"occurs"<< count;
	}
	system("pause");
}