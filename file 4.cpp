#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream file("data.txt");
	if (file.is_open()) {
		cout << "file openend";
	}
	else {
		cout << "file do not exist";
	}
	system("pause");

}