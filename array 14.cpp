#include<iostream>
using namespace std;
int main() {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	bool isexist = false;

	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (arr[i] == arr[j]) {
				isexist = true;
			}
		}

	}
	if (isexist == true) {
		cout << "found";
	}
	else if (isexist == false) {
		cout << "not found";
	}
	system("pause");
}