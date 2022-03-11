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

int minVal(int a, int b)
{
	return (a > b ? b : a);
}

void solving(void)
{
	int values[8];
	int milliliters_of_drink = 0, limes = 0, grams = 0;
	int milliliters_per_friend = 0, toast = 0;

	for (int i = 0; i < 8; ++i)
		cin >> values[i];

	milliliters_of_drink = values[1] * values[2];
	limes = values[3] * values[4];
	grams = values[5] / values[7];
	milliliters_per_friend = milliliters_of_drink / values[6];

	toast = minVal(minVal(milliliters_per_friend, limes), grams) / values[0];

	cout << toast << "\n";
}
