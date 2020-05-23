#include <iostream>

using namespace std;

int main()
{
	int waterConsumption, gasConsumption, dailyEnergy, rent, nightEnergy, motherSalary, fatherSalary, totalSalary;
	int daysCount = 30, childMoney = 40;
	cin >> waterConsumption;
	cin >> gasConsumption;
	cin >> dailyEnergy;
	cin >> rent;
	cin >> nightEnergy;
	cin >> motherSalary;
	cin >> fatherSalary;

	totalSalary = motherSalary + fatherSalary;

	double waterCosts, gasCosts, electricalEnergyCosts, allCosts, remainingSalary, moneyPerDay;
	waterCosts = waterConsumption * 1.65;
	gasCosts = gasConsumption * 0.09;
	electricalEnergyCosts = dailyEnergy * 0.13 + nightEnergy * 0.07;
	allCosts = waterCosts + gasCosts + electricalEnergyCosts + rent + childMoney;
	remainingSalary = totalSalary - allCosts;
	moneyPerDay = remainingSalary / 30;

	cout << "Water : " << waterCosts << '\n';
	cout << "Gas : " << gasCosts << '\n';
	cout << "Energy : " << electricalEnergyCosts << '\n';
	cout << "All costs : " << allCosts << '\n';
	cout << "Remaining Salary : " << remainingSalary << '\n';

	if (remainingSalary < 0) {
		cout << "You should find new job !" << '\n';
	}

	cout << "Money for one day : " << moneyPerDay;

	return 0;
}
