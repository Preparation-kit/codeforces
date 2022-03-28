#include<bits/stdc++.h>

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
	int n,sum=0,ans=0,mins=INT_MAX;

	cin >> n;

	int m[n+5];

	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
	}

	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < m[i]; j++)
		{
			int temp;
			cin >> temp;
			sum += temp;
		}

		ans = (sum * 5) + (m[i] * 15);
		mins = min(mins, ans);
	}

	cout << mins << endl;
}
