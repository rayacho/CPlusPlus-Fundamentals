#include <iostream>
#include <sstream>
#include <string>
#include <set>
using namespace std;

int main()
{
	string line;
	getline(cin, line);

	istringstream lineStream(line);
	int number;
	set<int> numbers;

	while (lineStream >> number)
	{
		numbers.insert(number);
	}

	set<int>::iterator iter = numbers.end();

	for (int i = 0; i < 3; i++) {
		prev(iter, i);

		cout << *iter << " ";
	}

	return 0;
}