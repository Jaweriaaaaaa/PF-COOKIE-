#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream file("info.txt");
	string name, city, dept;
	cout << "enter your name,city and dept";
	cin >> name >> city >> dept;
	file << name << endl;
	file << city << endl;
	file << dept << endl;
	file.close();
	cout << "data entered successfully";
	system("pause");
}