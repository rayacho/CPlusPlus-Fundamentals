#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
	string resource;
	int quantity;
	unordered_map<string, int> resources;
	vector<string> inputOrder;

	while (cin >> resource && resource != "stop") {
		cin >> quantity;

		if (resources.count(resource) > 0) {
			resources[resource] += quantity;
		}
		else {
			resources.insert(pair<string, int>(resource, quantity));
			inputOrder.push_back(resource);
		}
	}

	for (vector<string>::iterator i = inputOrder.begin(); i != inputOrder.end(); i++) {
		cout << *i << " -> " << resources[*i] << endl;
	}

	return 0;
}