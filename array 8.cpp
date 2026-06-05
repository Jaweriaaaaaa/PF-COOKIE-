#include<iostream>
using namespace std;
int main() {
	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum = sum + arr[i];
		
	}
	int average = sum / 5.0;
	cout << average;
	system("pause");
}