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
	int n, m;

	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int x;
		int y;
		cin >> x >> y;

		int rigth = arr[x - 1] - y;
		int left = y - 1;

		if (x - 1 >= 1)
		{
			arr[x-2] += left;
		}

		if (x + 1 <= n)
		{
			arr[x] += rigth;
		}

		arr[x - 1] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}
