#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void find_first_str(string word, vector<string>& sort_word);

class sales
{
private:
	string town;
	string product;
	double price;
	double quantity;
	double volume;

public:
	sales() {
	}

	sales(string _town, string _product, double _price, double _quantity) :
		town(_town), product(_product), price(_price), quantity(_quantity)
	{
	}

	string& getTown() {
		return town;
	}

	void setTown(string _town) {
		town = _town;
	}

	string& getProduct() {
		return product;
	}

	void setProduct(string _product) {
		product = _product;
	}

	double& getPrice() {
		return price;
	}

	void setPricen(double _price) {
		price = _price;
	}

	double& getQuantity() {
		return quantity;
	}

	void setQuantity(double _quantity) {
		quantity = _quantity;
	}

	double& getVolume() {
		return volume;
	}
	void setVolume(double _volume) {
		volume = _volume;
	}


	void print(vector<sales>& inputVector, vector<string>& first_town)
	{
		sort(first_town.begin(), first_town.end());

		for (vector<string>::iterator itr = first_town.begin(); itr != first_town.end(); ++itr) {
			for (vector<sales>::iterator it = inputVector.begin(); it != inputVector.end(); ++it) {

				if (it->getTown() == (*itr)) {
					cout << std::fixed;
					cout.precision(2);
					cout << it->getTown() << " -> " << it->getVolume() << endl;
				}
			}
		}
	}

	bool find_town(vector<sales>& inputVector, string city, double volume_) {

		for (vector<sales>::iterator it = inputVector.begin(); it != inputVector.end(); ++it) {
			if (it->getTown() == city) {
				double sum = it->getVolume();
				sum += volume_;
				it->setVolume(sum);
				return true;
			}
		}

		return false;
	}
	~sales() {
	}
};


int main()
{
	sales sale;

	vector<sales> vec;
	vector<sales> ::iterator it;
	int n = 0;
	cin >> n;

	string townIn;
	string productIn;
	double priceIn;
	double quantityIn;
	double volume;

	vector<string> sort_word;


	for (int i = 0; i < n; i++) {
		cin >> townIn;
		sale.setTown(townIn);

		find_first_str(townIn, sort_word);

		cin >> productIn;
		sale.setProduct(productIn);
		cin >> priceIn;
		sale.setPricen(priceIn);
		cin >> quantityIn;
		sale.setQuantity(quantityIn);
		volume = priceIn * quantityIn;
		sale.setVolume(volume);

		bool find_shit = sale.find_town(vec, townIn, volume);
		if (!find_shit) {
			vec.push_back(sale);
		}
	}

	sale.print(vec, sort_word);

	return 0;
}

void find_first_str(string word, vector<string>& sort_word) {

	vector<string>::iterator itr = find(sort_word.begin(), sort_word.end(), word);
	if (itr == sort_word.end()) {
		sort_word.push_back(word);
	}
}