#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string str;
	getline(cin, str);

	stringstream ss;
	ss << str;

	vector<pair <string, int>> myVector;
	string temp;

	while (ss >> temp) {
		string lowString = "";
		bool isExistent = false;

		for (int i = 0; i < temp.size(); i++) {
			lowString += tolower(temp[i]);
		}

		for (int i = 0; i < myVector.size(); ++i) {
			if (myVector[i].first == lowString) {
				myVector[i].second++;
				isExistent = true;
				break;
			}
		}
		if (isExistent == false) {
			myVector.push_back(make_pair(lowString, 1));
		}
	}

	vector<string> outVector;

	for (int i = 0; i < myVector.size(); i++) {
		if (myVector[i].second % 2 == 1) {
			outVector.push_back(myVector[i].first);
		}
	}

	for (int i = 0; i < outVector.size() - 1; i++) {
		cout << outVector[i] << ", ";
	}

	cout << outVector[outVector.size() - 1] << endl;

	return 0;
}

