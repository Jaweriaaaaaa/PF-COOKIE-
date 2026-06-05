#include<iostream>
using namespace std;
int main() {
	int arr[5] = { 1,2,3,4,5 };
		if (arr[0] == arr[4] && arr[1] == arr[3]) {
			cout << "is a palindrom";
		}
		else {
			cout << "not a palindrome";
		}
	
	system("pause");
}