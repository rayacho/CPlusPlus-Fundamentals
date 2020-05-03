#include<iostream>
#include<string>
#include<locale>

using namespace std;

string capitalizeSentence(string sentence) {
	sentence[0] = toupper(sentence[0]);

	for (int i = 0; i < sentence.length() - 1; i++) {
		if (!isalpha(sentence[i]) && isalpha(sentence[i + 1])) {
			sentence[i + 1] = toupper(sentence[i + 1]);
		}
	}

	return sentence;
}

int main()
{
	string sentence;
	getline(cin, sentence);

	string capitalizedSentence = capitalizeSentence(sentence);
	cout << capitalizedSentence;

	return 0;
}