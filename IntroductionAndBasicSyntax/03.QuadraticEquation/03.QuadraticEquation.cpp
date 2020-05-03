#include <iostream>
#include <math.h>

using namespace std;

void printQuadraticEquationRoots(double a, double b, double c) {
	double d, x1, x2;

	d = b * b - 4 * a * c;

	if (d == 0) {
		x1 = ((b * -1) + sqrt(d)) / (2 * a);
		cout << x1;
	}
	else if (d > 0) {
		x1 = ((b * -1) + sqrt(d)) / (2 * a);
		x2 = ((b * -1) - sqrt(d)) / (2 * a);
		cout << x1 << " " << x2;
	}
	else {
		cout << "no roots";
	}
}

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	printQuadraticEquationRoots(a, b, c);

	return 0;
}