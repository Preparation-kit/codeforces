#include <iostream>
#include <string>

using namespace std;

int main()
{
	int queries = 0;
	string line = "";
	int n, t;
	string s;

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		cin >> n >> t;
		cin >> s;

		for (int j = 0; j < t; j++)
		{
			for (int i = 0; i < n; i++)
			{
				if (s[i] == 'B' && s[i + 1] == 'G')
				{
					swap(s[i], s[i + 1]);
					i++;
				}
			}
		}

		cout << s << "\n";

	}

	return 0;
}
