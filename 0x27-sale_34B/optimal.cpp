#include <iostream>
#include <algorithm>

using namespace std;

void solving(void);

int main()
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
	int n, m, a[100];

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	int s(0);
	for (int i = 0; i < m; ++i)
	{
		if (a[i] >= 0)
		{
			break;
		}
		s += a[i];
	}

	cout << -s << endl;
}
