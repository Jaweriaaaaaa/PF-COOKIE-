#include<iostream>
using namespace std;
int main() {
	int students;
	cout << "enter number of students";
	cin >> students;
	int questions;
	cout << "enter number of question";
	cin >> questions;
	for (int i = 1; i <= students; i++) {
		cout << "student" << i;
		int score = 0;
		for (int j = 1; j <= questions; j++) {
			cout << "question" << j << endl;
			int status;
			cout << "enter status of question 0 for incorrect 1 for correct";
			cin >> status;
			if (status == 1) {
				score++;
				
			}
			}
		if(score>=3){
			cout << "pass" << endl;
		}
		else {
			cout << "fail" << endl;
		}
		cout << "student" << i << endl;
		cout << "score" << score << endl;

	}
	system("pause");
}