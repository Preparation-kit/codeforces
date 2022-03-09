#include<bits/stdc++.h>

using namespace std;

int main()
{
	char s[101];
	int l = 0,u = 0, i = 0;

	int queries = 0;
	string line = "";

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		scanf("%s", s);

		for (i = 0; i < (int) strlen(s); i++)
		{
			if (s[i] >= 65 && s[i] <= 90)
				u++;
			else if (s[i] >= 97 && s[i] <= 122)
				l++;
		}

		if (u > l)
		{
			for (i = 0; i < (int) strlen(s); i++)
			{
				if (s[i] >= 97 && s[i] <= 122)
				{
					s[i] = 65 + s[i] - 97;
				}
			}
		}
		else
		{
			for (i = 0; i < (int) strlen(s); i++)
			{
				if (s[i] >= 65 && s[i] <= 90)
				{
					s[i] = 97 + s[i] - 65;
				}
			}
		}

		printf("%s\n", s);

	}

	return 0;
}
