#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream file1("matrix1.txt");
	ifstream file2("matrix2.txt");
	ofstream result("result.txt");
	int rows1, cols1;
	int rows2, cols2;
	file1 >> rows1 >> cols1;
	file2 >> rows2 >> cols2;

	int matrix1[10][10];
	int matrix2[10][10];
	int sum[10][10];
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			file1 >> matrix1[i][j];
		}
	}
	for (int i = 0; i < rows2; i++) {
		for (int j = 0; j < cols2; j++) {
			file2 >> matrix2[10][10];
		}
	}
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			sum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			result << sum[i][j];
		}
		result << endl;



	}

	file1.close();
	file2.close();
	result.close();
	cout << "matrix addition is completed";
	system("pause");
}