#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream file("data.txt");
	int marks;
	cout << "enter marks";
	cin >> marks;
	string name;
	cout << "enter name";
	cin >> name;
	file << marks;
	file << name;
	file.close();
	cout << "data entered succfully";
	system("pause");

}
