#include<iostream>
using namespace std;
int main() {
	int arr[5];
	int count = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];

	}
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (arr[i] == arr[j]) {
				count++;
				
				
			}
			
		}
		if (count == 0) {
			cout << arr[i];
		}
		
	}
	system("pause");
}