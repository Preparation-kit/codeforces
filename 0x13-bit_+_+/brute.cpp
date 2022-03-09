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
	int n = 0, x = 0;
	string statement = "";

	cin >> n;

	while (n--)
	{
		cin >> statement;

		if (statement == "++X" || statement == "X++")
			x++;
		else if (statement == "--X" || statement == "X--")
			x--;
	}

	cout << x << "\n";

}
