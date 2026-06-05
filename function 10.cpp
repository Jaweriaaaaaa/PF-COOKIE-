#include<iostream>
using namespace std;
int sum(int,int);
int main() {
	int num1,num2;
	cout << "enter two number";
	cin >> num1>>num2;
	cout << sum(num1,num2);
	system("pause");
}
int sum(int a, int b) {
	return a + b;
}