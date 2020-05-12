#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>
#include <algorithm>

using namespace std;
using Words = vector<string>;

Words getWords(istream& in);

class SentenceShifter {
private:
	Words words;

	void shift(size_t shiftCount) {
		shiftCount %= this->words.size();
		rotate(this->words.rbegin(), this->words.rbegin() + shiftCount, this->words.rend());
	}

public:
	SentenceShifter(Words words, size_t shiftCount) :
		words(move(words)) {
		shift(shiftCount);
	}

	Words getShiftedSentence() {
		return words;
	}
};

int main()
{
	istream& in = cin;
	ostream& out = cout;

	Words words = getWords(in);
	size_t shiftCount;
	in >> shiftCount;
	SentenceShifter sentenceShifter{ words, shiftCount };

	Words shifted = sentenceShifter.getShiftedSentence();

	for (auto const& word : shifted) {
		out << word << endl;
	}

	return 0;
}

Words getWords(istream& in) {
	string sentence;
	getline(in, sentence);
	istringstream iss{ sentence };
	Words words{ istream_iterator<string>{ iss },
				 istream_iterator<string>{ } };
	return words;
}