#include <iostream>
#include <algorithm>

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
	string sum_string = "", numbers = "";


	cin >> sum_string;

	// cout << sum_string << "\n";

	for (int i = 0; i < sum_string.length(); ++i)
	{
		if (i % 2 == 0)
		{
			numbers += sum_string[i];
			// cout << numbers << "\n";
		}
	}

	sort(numbers.begin(), numbers.end());

	// cout << numbers << "\n";

	for (int i = 0; i < numbers.length() - 1; ++i)
	{
		cout << numbers[i] << "+";

	}

	cout << numbers[numbers.length() - 1] << "\n";
}
