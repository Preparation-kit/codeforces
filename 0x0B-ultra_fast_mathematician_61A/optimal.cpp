#include<string>
#include <iostream>

using namespace std;

int main()
{
	string s = "",s1 = "", s2 = "";
	int len = 0;
	int queries = 0;
	string line = "";

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		cin >> s >> s1;

		s2 = "";
		len = s.length();
		for (int i = 0; i < len; i++)
		{
			if (s[i] != s1[i])
				s2 += '1';
			else
				s2 += '0';
		}

		cout << s2 << "\n";
	}

	return 0;
}
