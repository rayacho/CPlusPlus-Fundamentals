#include<iostream>
#include<string>

using namespace std;

int main()
{
	int rows, cols, search;
	cin >> rows;
	cin >> cols;
	int matrix[100][100];
	bool isFound = false;

	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < cols; col++) {
			cin >> matrix[row][col];
		}
	}

	cin >> search;

	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < cols; col++) {
			if (matrix[row][col] == search) {
				cout << row << " " << col << endl;
				isFound = true;
			}
		}
	}

	if (!isFound) {
		cout << "not found";
	}

	return 0;
}