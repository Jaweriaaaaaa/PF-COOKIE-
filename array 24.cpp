#include<iostream>
using namespace std;
int sum = 0;
	int sumofarray(int arr[], int size){

		for(int i=0;i<5;i++){
			sum = sum + arr[i];
			


	}
		return sum;

}
	int main() {
		int arr[5];
		cout << "enter 5 numbers";
		for (int i = 0; i < 5; i++) {
			cin >> arr[i];
			
		}
		  int result=sumofarray(arr, 5);
		  cout << result;
		  system("pause");


	}