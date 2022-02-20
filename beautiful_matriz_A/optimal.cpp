#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	int queries = 0;
	string line = "";

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		for (int i = 1; i <= 5; ++i)
		{
			for (int j = 1; j <= 5; ++j)
			{
				cin >> x;
				if (x == 1)
				{
					cout << abs(i - 3) + abs(j - 3) << endl;
				}
			}
		}
	}

	return 0;
}
