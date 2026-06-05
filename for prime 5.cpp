#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "enter a number";
	cin >> n;
	int largest = 0;
	for (int i = 2; i < n; i++) {
		bool prime = true;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				prime = false;

			}
			
		}
		if(prime){
			if (i > largest) {
				largest = i;
				
			}
		
			

		}
	}
	cout << largest;
	system("pause");
}