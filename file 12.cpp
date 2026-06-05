#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream file("source.txt");
	string name;
	string searchname;
	cout << "enter name you want to search";
	cin >> searchname;
	bool found = false;
	while (file >> name) {
		if (name == searchname) {
			found = true;
		}
	}
	if (found) {
		cout << "required name is found";
	}
	file.close();
	system("pause");
}