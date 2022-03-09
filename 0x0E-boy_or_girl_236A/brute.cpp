#include <iostream>
#include <map>

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
	string user_name = "";
	map<char, int> m;

	cin >> user_name;
	// cout << user_name << "\n";

	for (int i = 0; i < (int) user_name.length(); ++i)
	{
		// the key doesn't exist
		if (m.find(user_name[i]) == m.end())
		{
			m.insert(make_pair(user_name[i], 0));
		}
	}

	if (m.size() % 2 == 0)
	{
		cout << "CHAT WITH HER!" << "\n";

	}
	else
		cout << "IGNORE HIM!" << "\n";

	// for (auto x : m)
	// {
	// 	cout << x.first << ": " << x.second << "\n";
	// }

	// cout << "\n\n";
}
