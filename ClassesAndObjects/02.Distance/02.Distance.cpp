#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Point {
private:
	double x;
	double y;
public:
	Point(double x, double y) : x(x), y(y) { }

	double distance(Point const& p) {
		return sqrt(pow(this->x - p.x, 2.0) + pow(this->y - p.y, 2.0));
	}
};

int main() {
	double x, y;

	cin >> x >> y;
	Point p{ x, y };

	cin >> x >> y;
	Point q{ x, y };

	cout << fixed << setprecision(3) << p.distance(q) << endl;

	return 0;
}