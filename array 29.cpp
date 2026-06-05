#include<iostream>
using namespace std;
int main() {
	int n = 10;
	int arr[10];
	cout << "enter 10 numbers";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		if (arr[0] == arr[9] && arr[1] == arr[8] && arr[2] == arr[7] && arr[3] == arr[6] && arr[4] == arr[5]) {
			{
				cout << "symmetric";
			}

		}
	}
	system("pause");
}