#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

void countRealNumbers(string input) {

	double numbers = 0.0;
	istringstream iss(input);
	map<double, double> mapNumbers;

	while (iss >> numbers) {
		mapNumbers[numbers]++;
	}

	map<double, double>::iterator itr;

	for (itr = mapNumbers.begin(); itr != mapNumbers.end(); ++itr) {
		cout << itr->first << " -> " << itr->second << endl;
	}
}

int main() {

	string input;
	getline(cin, input);

	countRealNumbers(input);

	return 0;
}