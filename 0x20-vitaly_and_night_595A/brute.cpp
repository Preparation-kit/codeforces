#include <iostream>

using namespace std;

void solving(void);

/**
 * main - Entry point
 *
 * return - on success 0
 */
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
	int m = 0, n = 0;
	int winA = 0, winB = 0;
	int count = 0;

	cin >> m >> n;

	for (int i = 0; i < m; ++i)
	{
		for (int i = 0; i < n; ++i)
		{
			cin >> winA >> winB;
			// cout << winA << winB << "\n";

			if (winA || winB)
				count++;
		}
	}

	cout << count << "\n";
}
