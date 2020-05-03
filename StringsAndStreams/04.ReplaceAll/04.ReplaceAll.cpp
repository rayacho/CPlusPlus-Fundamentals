#include<iostream>
#include<string>

using namespace std;

string replaceOccurrences(string sentence, string find, string replace) {
	while (sentence.find(find) != -1) {
		int index = sentence.find(find);
		int length = find.length();
		sentence.replace(index, length, replace);
	}

	return sentence;
}

int main()
{
	string sentence, find, replace;
	getline(cin, sentence);
	cin >> find;
	cin >> replace;

	string replacedSentence = replaceOccurrences(sentence, find, replace);
	cout << replacedSentence;

	return 0;
}