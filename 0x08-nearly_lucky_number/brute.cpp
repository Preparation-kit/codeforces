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
	string num = "";
	int count = 0, ch = 0;


	cin >> num;
	cout << num << "\n";


	for (int i = 0; i < (int) num.length(); ++i)
	{
		ch = (int) num[i];
		if (ch == 52 || ch == 55)
		{
			count++;
		}
	}

	if (count == 4 || count == 7)
	{
		cout << "YES" << "\n";
		return;
	}


	cout << "NO" << "\n";
}
