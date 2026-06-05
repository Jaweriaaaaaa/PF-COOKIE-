#include<iostream>
using namespace std;
void linearsearch(int arr[], int size) {
	int target = 7;
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			cout << "found";
		}
		else {
			cout << "not found";
		}
	}
	
}
int main() {
	int arr[5];
	cout << "enter 5 numbers";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	int target;
	cout <<"enter a number you want to find";
	cin >> target;
	linearsearch(arr, 5);
	system("pause");

}