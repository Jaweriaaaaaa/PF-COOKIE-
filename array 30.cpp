#include<iostream>
using namespace std;
int main() {
	int arr[15];
	cout << "enter 15 numbers";
	for (int i = 0; i < 15; i++) {
		cin >> arr[i];

	}

	
	for (int i = 0; i < 15; i++) {
		int count = 0;
		for (int j = 0; j < 15; j++) {
			if (arr[i] == arr[j]) {


				count++;
			}



		}

		if (count >= 7) {
			cout << "majority element exist";
		}
		else {
			cout << "it does not exist";
		}
	}
		
	
       

	

	
	system("pause");
}