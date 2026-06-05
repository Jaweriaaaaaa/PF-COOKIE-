#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	ifstream file;
	file.open("data.txt");
	string line;
	while (getline(file, line)) {
		cout << line;

	}
	file.close();
	system("pause");

}
