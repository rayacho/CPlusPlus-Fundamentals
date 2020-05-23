#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	map<string, double> citiesAndProducts;
	int citiesCount, productsCount, currentCount = 0;
	double pricePerProduct;
	string city;
	cin >> citiesCount;

	while(currentCount != citiesCount) {
		cin >> city;
		cin >> pricePerProduct;
		cin >> productsCount;

		double totalPrice = pricePerProduct * productsCount;

		if (citiesAndProducts.find(city) != citiesAndProducts.end()) {
			citiesAndProducts[city] += totalPrice;
		}
		else {
			citiesAndProducts.insert(make_pair(city, totalPrice));
			
			currentCount++;
		}
	}

	for (map<string, double>::iterator i = citiesAndProducts.begin(); i != citiesAndProducts.end(); i++)
	{
		cout << i->first << " " << i->second << "\n";
	}

	return 0;
}