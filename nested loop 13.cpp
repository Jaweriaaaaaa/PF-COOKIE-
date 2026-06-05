#include<iostream>
using namespace std;
int main() {
	int teachers;
	cout << "enter number of teachers";
	cin >> teachers;
	int classes;
	cout << "enter number of classes";
	cin >> classes;
	int totalpresent = 0;
	int status;
	int present = 0;
	int absent = 0;
	for (int i = 1; i <= teachers; i++) {
		cout << "teacher:" << i << endl;
		for (int j = 1; j <= classes; j++) {
			cout << "class:" << j << endl;
			cout << "enter status";
			cin >> status;
			if (status == 1) {
				present++;
				totalpresent += present;

			}
			else if(status==0){
				absent++;
			}
		}
		cout << "teacher:" << i << "totalpresent" << totalpresent << endl;
	}
	system("pause");

}