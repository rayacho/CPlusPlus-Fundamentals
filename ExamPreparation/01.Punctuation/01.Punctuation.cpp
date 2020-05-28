#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

vector<string> split(string input, char delimiter)
{
	string word = "";
	vector<string> sentences;

	for (auto x : input)
	{
		if (x == delimiter)
		{
			sentences.push_back(word);
			word = "";
		}
		else
		{
			word = word + x;
		}
	}
	
	return sentences;
}

int main()
{
	string input;
	getline(cin, input);

	vector<string> sentences = split(input, '|');
	vector<char> punctuationMarks = { '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', 
		';', '<', '=', '>', '?', '@', '[', ']', '^', '_', '`', '{', '}', '~' };
	map<int, int> occurrences;
	map<int, int>::iterator it;

	for (string sentence : sentences) {
		int counter = 0;

		for (int i = 0; i < sentence.length(); i++) {
			if (count(punctuationMarks.begin(), punctuationMarks.end(), sentence[i])) {
				counter++;
			}
		}

		if (occurrences.find(counter) == occurrences.end()) {
			occurrences.insert(make_pair(counter, 1));
		}
		else {
			it = occurrences.find(counter);
			it->second++;
		}
	}

	it = occurrences.begin();

	while (it != occurrences.end()) {
		cout << it->first << " symbol sentences: " << it->second << '\n';

		it++;
	}

	return 0;
}