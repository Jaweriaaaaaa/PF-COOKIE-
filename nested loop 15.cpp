#include<iostream>
using namespace std;
int main() {
	int students;
	cout << "enter number of students";
	cin >> students;
	int subjects;
	cout << "enter number of subjects";
	cin >> subjects;
	for (int i = 1; i <= students; i++) {
		int sum = 0;
		int total = 0;
		int average = 0;
		int highestavg = 0;
		cout << "student" << i << endl;
		for (int j = 1; j <= subjects; j++) {
			cout << "subject" << j << endl;
			int marks;
			cout << "enter marks";
			cin >> marks;
			
			sum = +marks;
			total += sum;
			average = total / 3.0;
			if (average > highestavg) {
				highestavg = average;

			}
	 
		}
	
		if (total > 90) {
			cout << "grade A";
		}
		else if (total < 90 && total>80) {
			cout << "grade B";

		}
		else if (total < 80 && total>70) {
			cout << "grade C";
		}
		else {
			cout << "grade D";
		}
		
		cout << "student" << i << "highestavg" << highestavg << endl;
		cout << "student" << i << "total" << total << endl;
		
	}
	system("pause");

}