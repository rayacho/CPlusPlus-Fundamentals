#include <iostream>

using namespace std;

void checkExpression(string expression) {
	int opening = 0, closing = 0;

	for (char ch : expression) {
		if (ch == '(') {
			opening++;
		}
		else if (ch == ')') {
			closing++;
		}
	}

	if (opening == closing) {
		cout << "correct";
	}
	else {
		cout << "incorrect";
	}
}

int main()
{
	string expression;
	cin >> expression;

	checkExpression(expression);

	return 0;
}