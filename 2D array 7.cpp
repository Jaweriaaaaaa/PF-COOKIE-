#include<iostream>
using namespace std;
int main() {
	int arr[3][3];
	cout << "enter elements";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		
		cout << "row" << i + 1 << "have sum:";
		for (int j = 0; j < 3; j++) {
			sum += arr[i][j];
		


		}
		cout << sum;
	}
	
	system("pause");
}