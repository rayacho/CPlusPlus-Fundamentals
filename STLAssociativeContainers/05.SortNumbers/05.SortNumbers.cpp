#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string line;
	getline(cin, line);

	istringstream lineStream(line);
	int number;
	vector<int> numbers;

	while (lineStream >> number) {
		numbers.push_back(number);
	}

	sort(numbers.begin(), numbers.end());

	for (vector<int>::iterator it = numbers.begin(); it != numbers.end() - 1; ++it) {
		cout << *it << " <= ";
	}

	cout << *(numbers.end() - 1) << endl;

	return 0;
}