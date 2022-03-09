#include <bits/stdc++.h>

using namespace std;

int main()
{
	int queries = 0;
	string line = "";
	string statement, newStatement;

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		cin >> statement;
		newStatement = "";

		for (int i = 0; i < statement.length(); i = i + 2)
		{
			newStatement.push_back(statement[i]);
		}

		sort(newStatement.begin(), newStatement.end());

		for (int i = 0; i < newStatement.length() - 1; i++)
		{
			cout << newStatement[i] << "+";
		}

		cout << newStatement[newStatement.length() - 1] << endl;
	}

	return 0;
}
