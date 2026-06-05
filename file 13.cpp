#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	ifstream source("source.txt");
	ofstream destination("destination.txt");
	string line;
	while (getline(source, line)) {
		destination << line << endl;

	}
	source.close();
	destination.close();
	cout << "file copied";
	system("pause");
}
