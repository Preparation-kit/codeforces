#include <iostream>
#include <map>
#define ll long long

using namespace std;

int main()
{
	int queries = 0;
	string line = "";
	map<char, ll> ma;
	string s;

	cin >> queries;

	while (queries--)
	{
		cin >> line;
		cout << line << "\n";

		cin >> s;

		for (ll i = 0; i < s.size(); i++)
			ma[s[i]]++;

		if (ma.size() % 2 == 0)
			cout << "CHAT WITH HER!" << endl;
		else
			cout << "IGNORE HIM!" << endl;
	}

	return (0);
}
