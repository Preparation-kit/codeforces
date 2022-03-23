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
	int n = 0, p = 0, q = 0;
	int count = 0;

	cin >> n;

	while (n--)
	{
		cin >> p >> q;

		if (q - p >= 2)
		{
			count++;
		}
	}

	cout << count << "\n";

}
