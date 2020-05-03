#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <ctype.h>

using namespace std;

void checkInput(string line) {
	int sum = 0;

	istringstream element(line);

	string current;
	string output;

	while (element >> current)
	{
		if (isdigit(current[0]) || current[0] == '-')
		{
			int num = stoi(current);
			sum += num;
		}
		else
		{
			output += current + " ";
		}
	}

	cout << sum << endl;
	cout << output << endl;
}

int main()
{
	string line;
	getline(cin, line);

	checkInput(line);

	return 0;
}