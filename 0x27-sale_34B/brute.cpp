#include <iostream>
#include <algorithm>
#include <vector>

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
	int n = 0, m = 0, price = 0;
	int temp = 0, count = 0;

	cin >> n >> m;
	cout << n << " - " << m << "\n";

	int maximum_values[m] = {0};


	for (int i = 0; i < n; ++i)
	{
		cin >> price;

		if (price >= 0)
			continue;

		if (temp < m)
		{
			maximum_values[temp++] = price;
			count += price;
		}
		else
		{
			sort(maximum_values, maximum_values + m);
			if (maximum_values[m - 1] > price)
			{
				count -= maximum_values[m - 1];
				maximum_values[m - 1] = price;
				count += maximum_values[m - 1];
			}
		}
	}

	for (int i = 0; i < m; ++i)
	{
		cout << maximum_values[i] << " ";
	}
	cout << "\n";

	cout << count * (- 1) << "\n";
}
