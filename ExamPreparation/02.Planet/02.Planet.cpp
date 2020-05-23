#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Planet {
private:
	string name;
	unsigned long long distance;
	unsigned long long diameter;
	unsigned long long mass;
public:
	Planet(string n, unsigned long long dist, unsigned long long d, unsigned long long m);

	int LightReach();

	unsigned long long Diameter();

	unsigned long long Mass();

	void Print();
};

Planet::Planet(string n, unsigned long long dist, unsigned long long d, unsigned long long m) {
	name = n;
	distance = dist;
	diameter = d;
	mass = m;
}

int Planet::LightReach() {
	return distance / 299792;
}

unsigned long long Planet::Diameter() {
	return diameter;
}

unsigned long long Planet::Mass() {
	return mass;
}

void Planet::Print() {
	cout << name << " " << distance << " " << diameter << " " << mass << '\n' << LightReach() << '\n';
}

int main()
{
	string name;
	unsigned long long distance, diameter, mass, minimumMass, maximumDiameter;
	int planetsCount;
	vector<Planet> planets;

	cin >> planetsCount;

	for (int i = 0; i < planetsCount; i++) {
		cin >> name;
		cin >> distance;
		cin >> diameter;
		cin >> mass;
		Planet p(name, distance, diameter, mass);

		p.Print();

		if (i == 0) {
			minimumMass = p.Mass();
			maximumDiameter = p.Diameter();
		}

		if (p.Mass() < minimumMass) {
			minimumMass = p.Mass();
		}

		if (p.Diameter() > maximumDiameter) {
			maximumDiameter = p.Diameter();
		}
	}

	cout << minimumMass << '\n' << maximumDiameter;

	return 0;
}