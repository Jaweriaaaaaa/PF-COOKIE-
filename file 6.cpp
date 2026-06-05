#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream file("data.txt", ios::app);
	file << "welcome to c++/n";
	file.close();
	cout << "data appended succfuly";
	system("pause");
}