#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n)
{
	if (n <= 1)
		return false;

	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}

int main()
{
	int size, matrix[100][100];
	cin >> size;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cin >> matrix[i][j];
		}
	}

	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (i + j >= size)
			{
				unsigned int number = matrix[i][j];
				int counter = 0;

				if (number != 1)
				{
					if (isPrime(number)) {
						sum += number;
					}
				}
				else
				{
					sum++;
				}
			}
		}
	}

	cout << sum;

	return 0;
}