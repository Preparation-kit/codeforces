#include <iostream>

using namespace std;

int main()
{
	int queries = 0;
	string line = "";

	// char ch[101];
	string ch;
	int syllables[3] = {5, 7, 5};
	bool haiku(true);

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		for (int i = 0; i < 3; ++i)
		{
			// cin.getline(ch, sizeof(ch) / sizeof(ch[0]));
			getline(cin >> ws, ch);
			// cout << ch << "\n";

			int n = 0;
			for (int j = 0; ch[j] != 0; ++j)
			{
				if (ch[j] == 'a' || ch[j] == 'e' || ch[j] == 'i' || ch[j] == 'o' || ch[j] == 'u')
				{
					n += 1;
				}
			}
			if (n != syllables[i])
			{
				haiku = false;
			}
		}

		cout << (haiku ? "YES" : "NO") << endl;
	}

	return 0;
}
