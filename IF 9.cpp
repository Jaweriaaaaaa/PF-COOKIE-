#include<iostream>
using namespace std;
int main() {
	int a1, a2, a3,sum;
	cout <<"enter valuse of 3 angles";
	cin >> a1 >> a2 >> a3;
	sum = a1 + a2 + a3;
	if (sum == 180) {
		cout << "angles of a triangle";
	}
	else {
		cout << "invalid angles";
	}
	system("pause");
	
}