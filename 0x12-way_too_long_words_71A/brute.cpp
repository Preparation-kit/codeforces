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
	int queries = 0;
	string word = "";

	cin >> queries;

	while (queries--)
	{
		cin >> word;

		if (word.length() > 10)
		{
			cout << word[0] << word.length() - 2 << word[word.length() - 1] << "\n";
			continue;
		}

		cout << word << "\n";

	}
}
