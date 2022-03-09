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
	int n = 0, count = 0;
	int points = 0, worst = 0, best = 0;

	cin >> n >> points;

	worst = points;
	best = points;

	for (int i = 0; i < n - 1; ++i)
	{
		cin >> points;
		if (points > best)
		{
			best = points;
			count++;
			// cout << "best " << best << "\n";
		}
		if (points < worst)
		{
			worst = points;
			count++;
			// cout << "worst "<< worst << "\n";
		}
	}

	cout << count << "\n";
}
