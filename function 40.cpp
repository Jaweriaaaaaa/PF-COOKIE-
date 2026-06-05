#include<iostream>
using namespace std;
int multiply(int a, int b) {
	return a * b;
}
int multiply(int a, int b, int c) {
	return a * b * c;
}
int add(int a, int b) {
	return a + b;
}
int main() {
	int x, y, z;
	cout << "enter a ,b and c";
	cin >> x >> y >> z;
	int product = multiply(x, y);
	cout << product;
	int sum = add(y, z);
	cout << sum;
	int all = multiply(x, y, z);
	cout << all;
	system("pause");

}