#include<iostream>
using namespace std;
bool iseven (int n) {
	if (n % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
	
}
int count(int n) {
	int countt = 0;
	for (int i = 1; i <= n; i++) {
		if (iseven(i) == 0) {
			countt++;
		}
	}
	return countt;
}
int main() {
	int num;
	cout << "enter a number";
	cin >> num;
	int result = count(num);
	cout << result;
	system("pause");
}