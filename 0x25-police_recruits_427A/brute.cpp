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
	int n = 0, event = 0;
	int arr[2] = {0};

	cin >> n;

	while (n--)
	{
		cin >> event;
		cout << event << "\n";

		if (arr[1] + event >= 0)
		{
			arr[1] += event;
		}
		else
		{
			arr[0] += event;
		}

		cout << arr[0] << " " << arr[1] << "\n\n";
	}

	cout << -1 * arr[0] << "\n";
}
