#include<iostream>;
using namespace std;
int main() {
	int arr[4];
	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0) {
			cout << arr[(i / 2) - 1];
		}
		else {
			cout << arr[i / 2];
		}
	}
	system("pause");
}