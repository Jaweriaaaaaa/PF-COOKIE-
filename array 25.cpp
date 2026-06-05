#include<iostream>
using namespace std;

int max_element(int arr[], int size) {
	int largest = arr[0];
	for (int i = 0; i < 5; i++) {
		if (arr[i] > largest) {
			largest = arr[i];
		}
	}
	return largest;
}
int main() {
	int arr[5];
	cout << "enter five numbers";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	  int result=max_element(arr, 5);
	  cout << result;
	  system("pause");

}