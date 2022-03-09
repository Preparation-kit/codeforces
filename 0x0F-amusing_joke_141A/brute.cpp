#include <iostream>
#include <cstring>
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
	string word = "", host = "", word_title = "";
	int item = 2;
	map<char, int> m, n;
	int flag = 0;

	while (item--)
	{
		cin >> word;
		word_title += word;
	}

	cin >> host;

	for (int i = 0; i < (int) word_title.length(); ++i)
	{
		m[word_title[i]] += 1;
	}

	for (int i = 0; i < (int) host.length(); ++i)
	{
		n[host[i]] += 1;
	}

	if (m.size() != n.size())
	{
		cout << "NO" << "\n";
		return;
	}

	for (auto x : n)
        {
	      if (x.second != m[x.first])
	      {
		      flag = 1;
		      break;
	      }
        }

	if (flag == 1)
		cout << "NO";
	else
		cout << "YES";

	cout << "\n";

}
