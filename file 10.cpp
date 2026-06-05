#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream file;
	file.open("test.txt");
	file << "file handling practice started";
	if (file.is_open()) {
		cout << "file opened succefully";
	}
	else {
		cout << "file does not exist";

	}
	file.close();
	system("pause");
}