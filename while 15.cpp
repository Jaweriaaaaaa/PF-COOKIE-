#include<iostream>
using namespace std;
int main() {
	cout << "1-hello";
	cout << "2-bye";
	cout << "3-end";
	int type=0;
	while (type != 3) {
		cout << "type";
		cin >> type;
		if (type == 1) {
			cout << "hello";
		}
		else if (type == 2) {
			cout << "bye";

		}
	}
	system("pause");
}