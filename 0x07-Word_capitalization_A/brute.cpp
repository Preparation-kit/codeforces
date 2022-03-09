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

	return (0);
}

void solving(void)
{
	string word = "";

	cin >> word;
	cout << word << "\n";


	if (word[0] >= 97 && word[0] <= 122)
		word[0] -= 32;


	cout << word << "\n";
}
