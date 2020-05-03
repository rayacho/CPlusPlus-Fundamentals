#include <iostream>

using namespace std;

void checkProductSign(int a, int b, int c) {
	int negative = 0;
	bool containsZero = false;

	if (a == 0 || b == 0 || c == 0) {
		containsZero = true;
	}

	if (a < 0) {
		negative++;
	}

	if (b < 0) {
		negative++;
	}

	if (c < 0) {
		negative++;
	}

	if (negative % 2 == 0 || containsZero) {
		cout << "+";
	}
	else {
		cout << "-";
	}
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	checkProductSign(a, b, c);

	return 0;
}