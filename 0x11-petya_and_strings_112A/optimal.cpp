#include<bits/stdc++.h>

using namespace std;

int main()
{
	int queries = 0;
	string line = "";

	char s[105],s1[105];
	int r = 0;

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		cin >> s >> s1;

		for (int i = 0; i < strlen(s); i++)
		{
			s[i] = tolower(s[i]);
			s1[i] = tolower(s1[i]);
		}

		r = strcmp(s, s1);
		if (r < 0)
			cout << "-1";
		else if (r > 0)
			cout << "1";
		else
			cout << "0";


		cout << "\n";
	}
}
