#include <iostream>

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

	return (0);
}


void solving(void)
{
	int n = 0, m = 0, a = 0, b = 0, ans = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a >> b;
			if (a == 1 || b == 1)
				ans++;
		}
	}

	cout << ans << endl;
}
