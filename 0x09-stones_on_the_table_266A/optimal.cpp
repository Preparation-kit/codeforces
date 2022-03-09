#include <iostream>

using namespace std;

string b;
int a, c;

int main()
{
	int queries = 0;
	string line = "";

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		c = 0;

		cin >> a >> b;
		for (int i = 0; i < a; i++) {
			if (b[i] == b[i + 1]) {
				c++;
			}
		}

		cout << c << "\n";
	}

	return (0);
}
