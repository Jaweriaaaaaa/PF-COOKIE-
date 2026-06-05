#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream file("info.txt", ios::app);
	string name;
	cout << "enter your name";
	cin >> name;
	int marks;
	cout << "enter marks";
	cin >> marks;
	file << name << " " << marks << endl;
	file.close();
	system("pause");
}