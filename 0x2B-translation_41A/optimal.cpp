#include<iostream>
#include<cstring>

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
	string s1, s2, s3;

	cin >> s1 >> s2;

	for (int i = s1.length() - 1; i >= 0; i--)
	{
		s3 += s1[i];
	}

	if (s3 == s2)
		cout << "YES\n";
	else
		cout << "NO\n";
}
