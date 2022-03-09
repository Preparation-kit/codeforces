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
	string stones = "";

	cin >> n >> stones;

	// cout << n << "\n" << stones << "\n";

	for (int i = 0; i < n; ++i)
	{
		if (stones[i] == stones[i + 1])
		{
			count++;
		}
	}


	cout << count << "\n";
}
