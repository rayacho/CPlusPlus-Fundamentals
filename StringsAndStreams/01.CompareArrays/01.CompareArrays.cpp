#include <iostream>
#include <string>

using namespace std;

void compare(string a, string b) {
	if (a == b) {
		cout << "equal";
	}
	else {
		cout << "not equal";
	}
}

int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	
	compare(a, b);

	return 0;
}