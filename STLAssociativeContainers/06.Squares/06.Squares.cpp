#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	string line;
	getline(cin, line);
	int number;
	istringstream lineStream(line);
	vector<int> numbers;

	while (lineStream >> number) {
		if (sqrt(number) == (int)sqrt(number)) {
			numbers.push_back(number);
		}
	}

	sort(numbers.begin(), numbers.end(), greater<int>());

	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << " ";
	}

	return 0;
}