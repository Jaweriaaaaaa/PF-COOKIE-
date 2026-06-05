#include<iostream>
using namespace std;
int main() {
	int shelves;
	cout << "enter number of shelves";
	cin >> shelves;
	int books;
	cout << "enter number of books";
	cin >> books;
	string names;
	for (int i = 1; i <= shelves; i++) {
		cout << "shelf" << i << endl;
		for (int j = 1; j <= books; j++) {
			cout << "book:" << j << endl;
			cout << "enter names of books";
			cin >> names;
			cout << "name:" << names << endl;
		}
	}
	system("pause");
}