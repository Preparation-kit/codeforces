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
	string str = "", rep = "";
	const int x = 32;
	map<char, int> m {
		{'A', 1}, {'O', 1}, {'Y', 1}, {'E', 1}, {'U', 1}, {'I', 1},
		{'a', 1}, {'o', 1}, {'y', 1}, {'e', 1}, {'u', 1}, {'i', 1}
	};

	cin >> str;
	// cout << str << "\n";

	for (int i = 0; i < str.size(); ++i)
	{
		if (m[str[i]] == 1)
			continue;

		rep += '.';
		rep += str[i] | x;
	}

	cout << rep << "\n";
}
