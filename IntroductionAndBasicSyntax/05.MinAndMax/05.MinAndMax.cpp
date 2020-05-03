#include <iostream>
#include <math.h>

using namespace std;

void printMinAndMax(int n) {
	int number, min = INT_MAX, max = INT_MIN;

	for (int i = 0; i < n; i++) {
		cin >> number;

		if (number < min) {
			min = number;
		}

		if (number > max) {
			max = number;
		}
	}

	cout << min << " " << max;
}

int main()
{
	int n;
	cin >> n;
	printMinAndMax(n);

	return 0;
}