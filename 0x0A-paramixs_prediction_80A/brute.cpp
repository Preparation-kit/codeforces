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
	int n = 0, m = 0, i = 0, j = 0, count = 0;
	int next = 0;

	cin >> n >> m;

	// cout << n << " " << m << "\n";

	n++; // next number of n number prime

	for (i = n; i < 60; i++)
	{
		count = 0;  // reset count each iterator
		for (j = 1; j <= i; j++)
		{
			// cout << i << " % " << j << " = " << i % j << "\n";
			if (i % j  == 0)
			{
				count++;
			}
		}

		if (count == 2) // if count == 2 finds two number divisible by i
		{
			next = j - 1;
			break;
		}

		// cout << "---------------" << "\n";
	}

	// cout << "next " << next << "\n";

	if (next == m)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";

}
