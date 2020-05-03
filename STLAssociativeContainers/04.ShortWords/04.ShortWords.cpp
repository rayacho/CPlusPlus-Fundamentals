#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	string line;
	getline(cin, line);
	transform(line.begin(), line.end(), line.begin(), ::tolower);

	istringstream lineStream(line);
	string word;
	set<string> words;

	while (lineStream >> word) {
		if (word.size() < 5) {
			words.insert(word);
		}
	}

	if (words.size() > 0) {
		for (set<string>::iterator it = words.begin(); it != --words.end(); ++it) {
			cout << *it << ", ";
		}
		cout << *(--words.end());
	}

	return 0;
}