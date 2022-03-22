#include <iostream>
#include <map>

using namespace std;

void solving(void);
char toLowercase(char ch);

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
	map<char, int> syllable;
	string phrase = "";
	int lines = 3;
	int count = 0, sum = 0;
	bool line1 = false, line2 = false, line3 = false;

	syllable.insert(pair<char, int>('a', 1));
	syllable.insert(pair<char, int>('e', 1));
	syllable.insert(pair<char, int>('i', 1));
	syllable.insert(pair<char, int>('o', 1));
	syllable.insert(pair<char, int>('u', 1));

	while (lines--)
	{
		//  function called ws, which consumes whitespace from an input stream.
		getline(cin >> ws, phrase);
		// cout << "-------->    " << phrase << "\n";

		count = 0;
		for (int i = 0; i < phrase.length(); ++i)
		{
			if (syllable[toLowercase(phrase[i])] == 1)
			{
				// cout << phrase[i] << " ";
				count++;
			}
		}

		// cout << "\n";

		sum += count;

		if (lines == 2 && count != 5)
		{
			getline(cin >> ws, phrase);
			getline(cin >> ws, phrase);
			break;
		}
		if (lines == 2 && count == 5)
		{
			line1 = true;
		}

		if (lines == 1 && count != 7)
		{
			getline(cin >> ws, phrase);
			break;
		}
		if (lines == 1 && count == 7)
		{
			line2 = true;
		}

		if (lines == 0 && count != 5)
		{
			break;
		}
		if (lines == 0 && count == 5)
		{
			line3 = true;
		}
	}

	if (sum == 17 && line1 == true && line2 == true && line3 == true)
	{
		cout << "YES" << "\n";
	}
	else
		cout << "NO" << "\n";

}

char toLowercase(char ch)
{
	if (ch >= 'A' && ch <= 'Z')    //checking for uppercase characters
		ch = ch + 32;         //converting uppercase to lowercase

	return (ch);
}
