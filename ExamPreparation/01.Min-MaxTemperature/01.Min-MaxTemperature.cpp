#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	map<string, vector<double>> citiesAndTemperatures;
	int citiesCount, currentCount = 0;
	double minTemperature, maxTemperature;
	string city;
	cin >> citiesCount;

	while (currentCount < citiesCount) {
		cin >> city;
		cin >> minTemperature;
		cin >> maxTemperature;

		if (citiesAndTemperatures.find(city) != citiesAndTemperatures.end()) {
			if (citiesAndTemperatures[city][0] > minTemperature) {
				citiesAndTemperatures[city][0] = minTemperature;
			}
			if (citiesAndTemperatures[city][1] < maxTemperature) {
				citiesAndTemperatures[city][1] = maxTemperature;
			}
		}
		else {
			vector<double> temperatures = { minTemperature, maxTemperature };
			citiesAndTemperatures.insert(make_pair(city, temperatures));

			currentCount++;
		}
	}

	map<string, vector<double>>::iterator it = citiesAndTemperatures.begin();
	while (it != citiesAndTemperatures.end())
	{
		cout << it->first << " " << it->second[0] << " " << it->second[1] << endl;
		it++;
	}

	return 0;
}