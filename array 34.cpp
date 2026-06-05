#include<iostream>
using namespace std;
int main() {
	int arr[10];
	cout << "enter 10 numbers";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
		int n = 10;
		for (int i = 0; i < 10; i++) {
			int total = 0;
			int difference = 0;
			difference = arr[i] - arr[n - 1 - i];
			for (int j = 9; j >= 0; j--) {
				cout << "diff is:" << difference << " " << arr[i] << arr[j];
			}


			total += difference;
			cout << "total difference" << total;
		}

	
	
		system("pause");
}
