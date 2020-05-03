#include <iostream>
#include <math.h>

using namespace std;

int greatestCommonDivisor(int a, int b)
{
	if (a == 0)
		return b;
	return greatestCommonDivisor(b % a, a);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << greatestCommonDivisor(a, b);

	return 0;
}