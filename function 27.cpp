#include<iostream>
using namespace std;
int square(int n) {
	return n * n;
}
int cube(int n) {
	return n * n * n;
}
int main() {
	int num;
	cout << "enter a number";
	cin >> num;
	int result = square(num);
	int answer = cube(result);
	cout << "answer is:" << answer;
	system("pause");
}