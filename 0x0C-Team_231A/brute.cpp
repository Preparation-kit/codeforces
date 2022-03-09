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
	int problems = 0, f = 0;
	int count = 0, solutions = 0;

	//231A
	cin >> problems;

	while (problems--)
	{
		count = 0;
		for (int i = 0; i < 3; ++i)
		{
			cin >> f;
			count += f;
		}

		if (count >= 2)
		{
			solutions++;
		}
	}

	cout << solutions << "\n";
}
