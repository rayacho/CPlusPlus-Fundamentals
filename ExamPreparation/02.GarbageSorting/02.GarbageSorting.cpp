#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main()
{
	list<int> glass;
	list<int> metal;
	list<int> plastic;

	int count;
	cin >> count;

	int i = 1;

	while (count >= i)
	{
		string type;
		string position;
		cin >> type >> position;

		if (type == "glass")
		{
			if (position == "front")
			{
				glass.push_front(i);
			}
			else if (position == "back")
			{
				glass.push_back(i);
			}

			++i;
		}
		else if (type == "metal")
		{

			if (position == "front")
			{
				metal.push_front(i);
			}
			else if (position == "back")
			{
				metal.push_back(i);
			}

			++i;
		}
		else if (type == "plastic")
		{

			if (position == "front")
			{
				plastic.push_front(i);
			}
			else if (position == "back")
			{
				plastic.push_back(i);
			}

			++i;
		}
		else
		{
			count--;
		}
	}

	if (!glass.empty())
	{
		cout << "glass - ";

		for (auto g : glass)
		{
			cout << g << " ";
		}
	}

	cout << endl;

	if (!metal.empty()) {
		cout << "metal - ";

		for (auto m : metal) {
			cout << m << " ";
		}
	}

	cout << endl;

	if (!plastic.empty()) {
		cout << "plastic - ";

		for (auto p : plastic) {
			cout << p << " ";
		}
	}

	return 0;
}