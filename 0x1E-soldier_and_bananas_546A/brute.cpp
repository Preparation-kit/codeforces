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
	int k = 0, n = 0, w = 0;
	int total_dollars = 0;

	cin >> k >> n >> w;

	for (int i = 1; i <= w; i++)
	{
		total_dollars += i * k;
	}

	if (total_dollars > n)
		cout << total_dollars - n << "\n";
	else
		cout << "0" << "\n";

}
