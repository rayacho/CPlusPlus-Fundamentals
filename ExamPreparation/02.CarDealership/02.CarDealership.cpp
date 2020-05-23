#include <iostream>
#include <vector>

using namespace std;

class Car {
private:
	string make;
	int year;
	double price;
public:
	Car(string m, int y, double p);

	double Price();

	void Print();
};

double Car::Price() {
	return price;
}

Car::Car(string m, int y, double p) {
	make = m;
	year = y;
	price = p;

	if (y < 1950 || y > 2019) {
		year = 2000;
	}

	if (p <= 0) {
		price = 1000;
	}
}

void Car::Print() {
	cout << "Make : " << make << '\n' << "Year : " << year << '\n' << "Price : " << price << '\n';
}

class AutoHouse {
private:
	int capital;
	int overchargeTax;
	vector<Car> storage;

public:
	AutoHouse(int c, int o);

	void ShowAllCars();

	void BuyACar(Car c);

	void SellAllCars();
};

AutoHouse::AutoHouse(int c, int o) {
	capital = c;
	overchargeTax = o;

	if (c <= 0) {
		capital = 10000;
	}

	if (o <= 0) {
		overchargeTax = 500;
	}
}

void AutoHouse::ShowAllCars() {
	vector<Car>::iterator it = storage.begin();

	while (it != storage.end()) {
		it->Print();

		it++;
	}
}

void AutoHouse::BuyACar(Car c) {
	if (capital - c.Price() >= 0) {
		capital -= c.Price();

		storage.push_back(c);
	}
}

void AutoHouse::SellAllCars() {
	vector<Car>::iterator it = storage.begin();

	cout << "Capital before sell : " << capital << '\n';

	while (it != storage.end()) {
		capital += it->Price() + overchargeTax;

		it++;
	}

	storage.clear();

	cout << "Capital after sell : " << capital << '\n';
}

int main()
{
	bool isShow = false, isSell = false;
	int carsCount = 0;
	int command;
	int capital, overcharge;
	cin >> capital;
	cin >> overcharge;

	AutoHouse autoHouse(capital, overcharge);

	while (true) {
		cin >> command;

		if (command == 0) {
			break;
		}

		if (command == 1) {
			isShow = true;
		}
		else if (command == 2) {
			isSell = true;
		}
		else if (command == 3) {
			carsCount++;
		}
	}

	while (carsCount > 0) {
		string make;
		int year;
		double price;

		cin >> make;
		cin >> year;
		cin >> price;

		Car car = Car(make, year, price);

		autoHouse.BuyACar(car);

		carsCount--;
	}

	if (isSell) {
		autoHouse.SellAllCars();
	}
	else if (isShow) {
		autoHouse.ShowAllCars();
	}

	return 0;
}