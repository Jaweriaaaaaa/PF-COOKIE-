#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream file("info.txt", ios::app);
	file << "i love programming/n";
	file.close();
	cout << "data appended successfully";
	system("pause");

}