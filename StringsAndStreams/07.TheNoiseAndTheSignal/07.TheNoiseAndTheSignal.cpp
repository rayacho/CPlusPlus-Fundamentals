#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	string str = "";
	vector<string> sentence;
	string temp = "";
	string maxString = "";
	int resultCompare = 0;
	char characters[] = "0123456789";
	string word = "";
	stringstream ss;

	getline(cin, str);

	ss << str;

	while (ss >> word) {
		for (size_t j = 0; j < strlen(characters); j++) {
			word.erase(remove(word.begin(), word.end(), characters[j]), word.end());
		}

		sentence.push_back(word);
	}

	for (int i = 0; i < sentence.size(); i++) {
		temp = sentence[i];
		if (temp.size() >= maxString.size()) {
			resultCompare = lexicographical_compare(maxString.begin(), maxString.end(), temp.begin(), temp.end());
			if (resultCompare == 0 || resultCompare == 1) {
				maxString = temp;
			}
		}
	}

	if (!maxString.empty()) {
		cout << maxString << endl;
	}
	else {
		cout << "no noise" << endl;
	}

	return 0;
}