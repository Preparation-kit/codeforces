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
	int a = 0, b = 0;

	cin >> a >> b;

	while (2 * a != b && a > 0)
	{
		a -= 1;
		b -= 3;
	}

	if (a * 2 == b)
		cout << a;
	else
		cout << 0;

	cout << "\n";
}
