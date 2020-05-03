#include <iostream>

using namespace std;

void orderAscending(int a, int b) {
	if (a > b) {
		cout << b << " " << a;
	}
	else {
		cout << a << " " << b;
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	orderAscending(a, b);

	return 0;
}