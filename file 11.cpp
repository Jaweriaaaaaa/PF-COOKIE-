#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	ifstream file;
	file.open("test.txt");
	string line;
	file >> line;
	int count = 0;

	while (getline(file, line)) {
		cout << line;
		count++;



	}
	cout << count;
	file.close();
	system("pause");
}