#include <iostream>

using namespace std;

int main()
{
	int queries = 0;
	string line = "";
	int n, points;

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		cin >> n >> points;

		int min(points), max(points), amazing(0);

		while (--n)
		{
			cin >> points;
			if (points < min)
			{
				min = points;
				++amazing;
			}
			if (points > max)
			{
				max = points;
				++amazing;
			}
		}

		cout << amazing << endl;
	}

	return 0;
}
