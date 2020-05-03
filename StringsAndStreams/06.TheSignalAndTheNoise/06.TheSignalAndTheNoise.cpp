#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector <string>  stringVector;
	vector <int> intVector;
	string TSK;
	getline(cin, TSK);
	string tempString;
	TSK += ' ';

	for (auto ch : TSK) {
		if (ch != ' ')
		{
			if (isdigit(ch)) {
				tempString += ch;
			}
		}
		if (ch == ' ') {
			stringVector.push_back(tempString); tempString.clear();
		}
	}

	for (int i = 0; i < stringVector.size(); i++) {
		intVector.push_back(stoi(stringVector[i]));
	}

	cout << *max_element(intVector.begin(), intVector.end());

	return 0;
}