#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

struct Student
{
	string firstName;
	string lastName;
	double average;
};

int main()
{
	vector<Student> students;
	vector<double> averageScores;
	map<string, double> names;
	map<string, double>::iterator it = names.begin();
	int number;

	cin >> number;

	for (int i = 0; i < number; i++)
	{
		double average;
		Student temp;

		cin >> temp.firstName;
		cin >> temp.lastName;
		cin >> average;

		temp.average = average;

		students.push_back(temp);

		averageScores.push_back(temp.average);

		names[temp.firstName + " " + temp.lastName] = temp.average;
	}

	sort(averageScores.begin(), averageScores.end(), greater<double>());

	for (unsigned int i = 0; i < averageScores.size(); i++)
	{
		for (unsigned int j = 0; j < students.size(); j++)
		{
			if (averageScores.at(i) == students.at(j).average)
			{
				cout << students.at(j).firstName << " " << students.at(j).lastName
					<< " " << students.at(j).average << '\n';

				students.erase(students.begin() + j);
			}
		}
	}

	cout << '\n';

	for (it = names.begin(); it != names.end(); it++)
	{
		cout << it->first << " " << it->second << '\n';
	}

	return 0;
}