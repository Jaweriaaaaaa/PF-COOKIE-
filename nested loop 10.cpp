#include<iostream>
using namespace std;
int main() {
	int students;
	cout << "enter number of students";
	cin >> students;
	int subjects;
	cout << "enter number of subjects";
	cin >> subjects;
	int average = 0;
	int total = 0;
	int marks;
	for (int i = 1; i <= students; i++) {
		cout << "student:" << i << endl;
		for (int j = 1; j <= subjects; j++) {
			cout << "subject:" << j << endl;
			cout << "enter marks";
			cin >> marks;
			total = total + marks;
			cout << "student:" << i << "total:" << total << endl;


		}
		average = total / subjects;
		cout << "student:" << i << "average" << average << endl;

	}
	system("pause");
}