#include <iostream>

using namespace std;

void solving(void);

int main(void)
{
	int queries = 0;
	string line = "";

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		solving();
	}

	return 0;
}

void solving(void)
{
	string number_one = "", number_two = "";
	int digit = 0;

	cin >> number_one >> number_two;

	// cout << number_one << "\n" << number_two << "\n";

	for (int i = 0; i < (int) number_two.length(); ++i)
	{
		// 49 - 48 = 1    and    48 - 48 = 0 ; ^ XOR
		digit = (number_one[i] - '0') ^ (number_two[i] - '0');
		cout << digit << "";
	}

	cout << "\n";
}
