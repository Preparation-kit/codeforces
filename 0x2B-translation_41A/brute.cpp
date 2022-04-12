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
	string s = "", t = "";
	int i = 0, j = 0;

	cin >> s >> t;
	// cout << s << "\n" << t  << "\n";

	for (i = 0, j = t.size() - 1; s[i] == t[j], i < s.size(); i++, j--)
	{
		// cout << s[i] << " " << i << " "<< t[j] << " " << j << "\n";
		if (s[i] - t[j] != 0)
			break;
	}

	if (i > s.size() - 1)
		i--, j++;

	// cout << s[i] << " : " << i << " : "<< t[j] << " : " << j << "\n";

	if (s[i] - t[j] == 0)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
}
