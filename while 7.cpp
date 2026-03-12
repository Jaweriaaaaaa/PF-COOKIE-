#include<iostream>
using namespace std;
int main() {
	int n = 1;
	int largest = 0;
	while (n != -1) {
		cout << "enter numbers";
		cin >> n;
		if (n > largest) {
			largest = n;
		}
		cout << largest;
	}
	system("pause");
}
