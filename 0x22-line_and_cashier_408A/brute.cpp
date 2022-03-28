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
	int number_of_cashes = 0, number_of_people = 0, min = 0;
	int seconds = 0, number_products = 0, total_products_by_cashes;
	const int timeToScan = 5, giveTheChange = 15;

	cin >> number_of_cashes;

	int cashes[number_of_cashes];

	for (int i = 0; i < number_of_cashes; ++i)
	{
		cin >> cashes[i];
	}

	for (int cashe_i = 0; cashe_i < number_of_cashes; ++cashe_i)
	{
		seconds = 0;
		number_of_people = cashes[cashe_i];

		for (int client_i = 0;  client_i < number_of_people; ++client_i)
		{
			cin >> number_products;
			seconds += number_products * timeToScan + giveTheChange;

		}

		if (cashe_i == 0 || seconds < min)
			min = seconds;

		// cout << seconds << "\n";
	}

	cout << min << "\n";
}
