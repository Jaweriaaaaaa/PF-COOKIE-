#include<iostream>
using namespace std;
void marks(int students, int subjects) {
	int sum = 0;
	for (int i = 1; i <= students; i++) {
		cout << "student" << i << endl;
			
		for (int j = 1; j <= subjects; j++) {
			cout << "subject" << j << endl;
			int marks;
			cout << "enter marks";
			cin >> marks;
			 sum = marks + sum;

		}
		cout << "student" << i << endl;
		cout << sum;



	}
}
int main() {
	int sub, stud;
	cout << "enter subjects and students";
	cin >> stud >> sub;
	marks(stud, sub);
	system("pause");

}