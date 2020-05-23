#include <iostream>
#include <math.h>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string firstString, secondString, finalString = "";
	int symbolsCount, differences = 0, sameCharacters = 0, sum = 0;
	cin >> symbolsCount;
	cin >> firstString;
	cin >> secondString;

	for (int i = 0; i < symbolsCount; i++) {
		if (firstString[i] == secondString[i]) {
			sameCharacters++;
			finalString += firstString[i];
		}
		else if (firstString[i] == tolower(secondString[i]) || tolower(firstString[i]) == secondString[i]) {
			sameCharacters++;
			finalString += toupper(firstString[i]);
		}
		else {
			differences++;
			finalString += '#';
		}

		if (isdigit(firstString[i])) {
			string s = string(1, firstString[i]);
			stringstream ss(s);
			int number;
			ss >> number;

			sum += number;
		}

		if (isdigit(secondString[i])) {
			string s = string(1, secondString[i]);
			stringstream ss(s);
			int number;
			ss >> number;

			sum += number;
		}
	}

	cout << finalString << '\n' << differences << '\n' << sameCharacters << '\n' << sum;

	return 0;
}