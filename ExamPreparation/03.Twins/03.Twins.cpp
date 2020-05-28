#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int commandsCount;
	cin >> commandsCount;

	vector<string> pepiCustomers;
	vector<string> mimiCustomers;
	string cashier, customer;
	int minutes, pepiMinutes = 0, mimiMinutes = 0;

	for (int i = 0; i < commandsCount; i++) {
		cin >> cashier >> customer >> minutes;

		if (cashier == "Pepi") {
			for (int i = 0; i < minutes; i++) {
				pepiCustomers.push_back(customer);
			}

			pepiMinutes += minutes;
		}
		else if (cashier == "Mimi") {
			for (int i = 0; i < minutes; i++) {
				mimiCustomers.push_back(customer);
			}

			mimiMinutes += minutes;
		}
	}

	int processingMinutes;
	cin >> processingMinutes;

	for (int i = 0; i < processingMinutes; i++) {
		if (i < pepiMinutes) {
			cout << "Pepi processing " << pepiCustomers[i] << '\n';
		}
		else {
			cout << "Pepi Idle" << '\n';
		}

		if (i < mimiMinutes) {
			cout << "Mimi processing " << mimiCustomers[i] << '\n';
		}
		else {
			cout << "Mimi Idle" << '\n';
		}
	}

	return 0;
}
