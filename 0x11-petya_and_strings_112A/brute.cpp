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
	string first = "", second = "";
	string primary = "", secondary = "";
	char f, s;

	cin >> first >> second;

	// cout << first << "\n" << second << "\n";

	for (int i = 0; i < first.length(); ++i)
	{
		f = first[i];
		if (first[i] >= 65 && first[i] <= 90)
			f = first[i] + 32;

		s = second[i];
		if (second[i] >= 65 && second[i] <= 90)
			s = second[i] + 32;

		// cout << f << ": " << s << "\n";

		primary += f;
		secondary += s;
	}

	if (primary < secondary)
		cout << "-1";
	else if (primary > secondary)
		cout << "1";
	else
		cout << "0" ;

	cout << "\n";
}
