#include <iostream>
#include <string>
#include <vector>

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

	return (0);
}

void solving(void)
{
	string word = "";
	vector<int> mayus_index;
	vector<int> minus_index;

	cin >> word;
	// cout << word << "\n";


	for (int i = 0; i < (int) word.length(); ++i)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
		{
			minus_index.push_back(i);
		}
		else if (word[i] >= 'A' && word[i] <= 'Z')
		{
			mayus_index.push_back(i);
		}
	}


	if (mayus_index.size() <= minus_index.size())
	{
		for (int i = 0; i < (int) mayus_index.size(); ++i)
		{
			word[mayus_index[i]] += 32;
		}
	}
	else
	{
		for (int i = 0; i < (int) minus_index.size(); ++i)
		{
			word[minus_index[i]] -= 32;
		}
	}

	cout << word << "\n";
}
