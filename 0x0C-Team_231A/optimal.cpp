#include <iostream>

using namespace std;

int main()
{
	int queries = 0;
	string line = "";
	int n, Petya, Vasya, Tonya, number(0);


	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		number = 0;

		cin >> n;

		while (n--)
		{
			cin >> Petya >> Vasya >> Tonya;
			if (Petya + Vasya + Tonya >= 2)
			{
				number += 1;
			}
		}

		cout << number << endl;
	}

	return 0;
}
