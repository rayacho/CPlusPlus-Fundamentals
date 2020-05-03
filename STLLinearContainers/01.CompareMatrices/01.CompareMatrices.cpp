#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int rows;
	cin >> rows;
	cin.ignore();

	vector<string> V(rows), V2(rows);

	for (int i = 0; i < rows; i++) {
		getline(cin, V[i]);
	}

	cin >> rows;
	cin.ignore();

	if (rows == V.size()) {
		for (int i = 0; i < rows; i++) {
			getline(cin, V2[i]);
		}
	}

	cout << (V == V2 ? "equal" : "not equal") << endl;

	return 0;
}