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
	string s = "";
	const string say_hello = "hello";
	int j = 0;

	cin >> s;
	cout << s << "\n";


	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == say_hello[j])
		{
			j++;
			cout << s[i] << "\n";
			if (j == 5)
				break;
		}
	}

	if (j == 5)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
}
