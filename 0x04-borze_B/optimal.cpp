#include<bits/stdc++.h>

using namespace std;

/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int i,n,l;
	char  s[10000];
	int queries = 0;
	string line = "";

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		cin >> s;

		l = strlen(s);
		for (i = 0; i < l; i++)
		{
			if (s[i] == '.')
				cout << "0";
			if ((s[i] == '-') && (s[i + 1]=='.'))
			{
				cout<<"1";
				i++;
			}
			if ((s[i] == '-') && (s[i + 1] == '-'))
			{
				cout<<"2";
				i++;
			}
		}

		cout<<endl;
	}

	return (0);
}
